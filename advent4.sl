import <Utilities/Sequence.sl>;
import <Utilities/String.sl>;

trim(s(1)) :=
  trim(tail(s)) when isWhiteSpace(head(s))
  else trim(allButLast(s)) when isWhiteSpace(last(s))
  else s;

noDups(p(3))[i] := 1 when size(removeDups(p[i])) = size(p[i]);

noAnagrams(p(3))[i] :=
  let a := sortBy(p, charCompare);
  in 1 when size(removeDups(a[i])) = size(a[i]);

main(s(2)) :=
  let
    passphrases := split(split(trim(s[1]), '\n'), ' ');
  in
    [sum(noDups(passphrases)), sum(noAnagrams(passphrases))]
;

