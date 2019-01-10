import <Utilities/Conversion.sl>;
import <Utilities/Sequence.sl>;
import <Utilities/String.sl>;

trim(s(1)) :=
  trim(tail(s)) when isWhiteSpace(head(s))
  else trim(allButLast(s)) when isWhiteSpace(last(s))
  else s;

increment(a(1), p(0))[i] :=
  a[i] + 1 when i = p
  else a[i];

part1(a(1), p(0), done(0)) :=
  let newP := p + a[p];
      newA := increment(a, p);
  in done when p < 1 or p > size(a)
     else part1(newA, newP, done + 1);

update(a(1), p(0))[i] :=
  a[i] - 1 when i = p and a[i] >= 3
  else a[i] + 1 when i = p
  else a[i];

part2(a(1), p(0), done(0)) :=
  let newP := p + a[p];
      newA := update(a, p);
  in done when p < 1 or p > size(a)
     else part2(newA, newP, done + 1);

main(s(2)) :=
  let
    jumps := stringToInt(split(trim(s[1]), '\n'));
  in
    [part1(jumps, 1, 0), part2(jumps, 1, 0)]
;

