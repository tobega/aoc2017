import <Utilities/Sequence.sl>;
import <Utilities/Math.sl>;

CollisionRecord ::= (t: float64, a: int32, b:int32);

byTime(leftCr, rightCr) := sign(leftCr.t - rightCr.t);

main(args(2)) :=
//  let a := [5,8,6,7,6,1];
//      s := insertionSortBy(a, standardComp);
  let a := [(a:482,b:481,t:23),(a:481,b:480,t:23),(a:479,b:475,t:18)];
      s := insertionSortBy(a, byTime);
  in s;//[size(a), size(s)];

