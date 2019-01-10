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

linear(a(1)) := stationary(a[1]) when a[2] = 0
  else [-a[1]/a[2]];

newton(a(1)) := // (p,v,a)
  let b := a[2] + a[3]/2;
      d := b*b - 2*a[3]*a[1];
      s := sqrt(d);
  in linear(a[[1,2]]) when a[3] = 0
  else [] when d < 0
  else [-b/a[3]] when d = 0
  else [(-b-s)/a[3], (-b+s)/a[3]];

CollisionRecord ::= (t: float64, points: int32(1));

collateDimensions: float64(1) * float64(1) -> float64(1);
collateDimensions(a(1), b(1)) :=
  a when equalList(b, [0.0,0.0])
  else b when equalList(a, [0.0,0.0])
  else intersection(a,b);

firstNonNegativeTime(f(1)) :=
  let a := head(f);
      b := firstNonNegativeTime(tail(f));
  in -1 when size(f) = 0
  else a when a >= 0 and floor(a) = a and (b < 0 or a < b)
  else b when b >= 0 and floor(b) = b
  else -1;

//firstCollision: float64(3) * int32(1) -> CollisionRecord;
firstCollision(pair(3), points(1)) :=
  let diffs := pair[1] - pair[2];
      roots := newton(diffs);
      collisionTimes := collateDimensions(roots[1], collateDimensions(roots[2], roots[3]));
  in (t: firstNonNegativeTime(collisionTimes), points: points);

findCollisions(axes(3), pairs(2))[i] := firstCollision(axes[pairs[i]], pairs[i]);

distinctPairs(n(0)) :=
  let npairs := transpose([duplicate(n, (n-1)), 1 ... (n - 1)]);
  in npairs when n = 2
  else distinctPairs(n - 1) ++ npairs;

doIt(s(1)) :=
  let
    points := split(trim(s), '\n');
    forces := findAll(points, "(p|v|a)=<[^>]*>");
    vals := extractVals(forces);
    axes := getAxes(vals);
  in findCollisions(axes, distinctPairs(size(axes)));

byTime(leftCr, rightCr) := 0;//sign(leftCr.t - rightCr.t);

main(s(2)) :=
  let
    collisions := doIt(s[1]);
    sorted := sortBy(collisions, byTime);
  in
    sorted
;

