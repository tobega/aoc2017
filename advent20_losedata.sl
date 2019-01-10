import <Utilities/Conversion.sl>;
import <Utilities/Math.sl>;
import <Utilities/Sequence.sl>;
import <Utilities/Set.sl>;
import <Utilities/String.sl>;
import <RegEx/RegEx.sl>;

trim(s(1)) :=
  trim(tail(s)) when isWhiteSpace(head(s))
  else trim(allButLast(s)) when isWhiteSpace(last(s))
  else s;

extractVals(s(1)) := stringToInt(split(s[4 ... (size(s) - 1)], ','));

getAxes(v(2)) := [v[all, 1], v[all, 2], v[all, 3]]; // from (p(x,y,z), v(...), a) to (x(p,v,a), y(...), z)

stationary(p) := [] when p /= 0
  else [0, 0]; // weird result to signify all acceptable

linear: float64(1) -> float64(1);
linear(a(1)) := stationary(a[1]) when a[2] = 0
  else [-a[1]/a[2]];

newton: float64(1) -> float64(1);
newton(a(1)) := // (p,v,a)
  let b := a[2] + a[3]/2;
      d := b*b - 2*a[3]*a[1];
      s := sqrt(d);
  in linear(a[[1,2]]) when a[3] = 0
  else [] when d < 0
  else [-b/a[3]] when d = 0
  else [(-b-s)/a[3], (-b+s)/a[3]];

CollisionRecord ::= (t: float64, a: int32, b:int32);

isAllRecord(a(1)) :=
  false when size(a) /= 2
  else true when a[1] = 0 and a[2] = 0
  else false;

collateDimensions: float64(1) * float64(1) -> float64(1);
collateDimensions(a(1), b(1)) :=
  let allA := isAllRecord(a);
      allB := isAllRecord(b);
  in a when allB
  else b when allA
  else intersection(a,b);

firstNonNegativeTime: float64(1) -> float64;
firstNonNegativeTime(f(1)) :=
  let a := head(f);
      b := firstNonNegativeTime(tail(f));
  in -1 when size(f) = 0
  else a;// when a >= 0 and floor(a) = a and (b < 0 or a < b)
//  else b when b >= 0 and floor(b) = b
//  else -1;

//firstCollision: float64(3) * int32(1) -> CollisionRecord;
firstCollision(pair(3), points(1)) :=
  let diffs := pair[1] - pair[2];
      roots := newton(diffs);
      collisionTimes := collateDimensions(roots[1], collateDimensions(roots[2], roots[3]));
      t := firstNonNegativeTime(collisionTimes); 
  in (t: t, a: points[1], b: points[2]) when t >= 0;

findCollisions(axes(3), pairs(2))[i] := firstCollision(axes[pairs[i]], pairs[i]);

distinctPairs(n(0)) :=
  let npairs := transpose([duplicate(n, (n-1)), 1 ... (n - 1)]);
  in npairs when n = 2
  else npairs ++ distinctPairs(n - 1);

byTime(leftCr, rightCr) := sign(leftCr.t - rightCr.t);

getFirstCoincidents(cr(1)) :=
  let first := head(cr);
      next := tail(cr);
  in [first] when size(next) = 0
  else [first] ++ getFirstCoincidents(next) when head(next).t = first.t
  else [first];

getColliding(coincident(1), remaining(1)) :=
  let first := head(coincident);
      colliders := intersection(remaining, [first.a, first.b]);
      moreColliders := getColliding(tail(coincident), remaining);
  in [] when size(coincident) = 0
  else union(colliders, moreColliders) when size(colliders) = 2
  else moreColliders;

//doCollisions: int32(1) * CollisionRecord(1) -> int32(1);
doCollisions(remainingPoints(1), collisions(1)) :=
  let coincident := getFirstCoincidents(collisions);
      colliding := getColliding(coincident, remainingPoints);
      newRemaining := takeAway(remainingPoints, colliding);
  in coincident;//remainingPoints when size(collisions) = 0
//  else doCollisions(newRemaining, drop(collisions, size(coincident)));

main(s(2)) :=
  let
    points := split(trim(s[1]), '\n');
    forces := findAll(points, "(p|v|a)=<[^>]*>");
    vals := extractVals(forces);
    axes := getAxes(vals);
    collisions := findCollisions(axes, distinctPairs(498));//size(axes)));
    sorted := sortBy(collisions, byTime);
    remainingPoints := doCollisions(1 ... size(points), sorted);
  in
    [size(collisions), size(removeDups(collisions)), size(sorted), size(removeDups(sorted))]
;

