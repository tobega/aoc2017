import <Utilities/Conversion.sl>;
import <Utilities/Sequence.sl>;
import <Utilities/String.sl>;

trim(s(1)) :=
  trim(tail(s)) when isWhiteSpace(head(s))
  else trim(allButLast(s)) when isWhiteSpace(last(s))
  else s;

distinctPairs(n(0)) :=
  let npairs := transpose([duplicate(n, (n-1)), 1 ... (n - 1)]);
  in npairs when n = 2
  else npairs ++ distinctPairs(n - 1);

dividingPairResults(r(1), p(2))[i] :=
  let pair := r[p[i]];
      p1 := pair[1];
      p2 := pair[2];
  in p1/p2 when p1 mod p2 = 0
  else p2/p1 when p2 mod p1 = 0;

main(s(2)) :=
  let
    lines := split(trim(s[1]), '\n');
    matrix := split(lines, '\t');
    sheet := stringToInt(matrix);
    pairs := distinctPairs(size(head(matrix)));
    checksum := sum(vectorMax(sheet) - vectorMin(sheet));
    rowPairResults := dividingPairResults(sheet, pairs);
  in [checksum, sum(join(rowPairResults))];

