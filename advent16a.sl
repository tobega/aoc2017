import <Utilities/Conversion.sl>;
import <Utilities/Sequence.sl>;

alfabet := "abcdefghijklmnop";
noOfTimes := 1000000000;

doSpin(s, place(1)) :=
  let
    end := size(place) - s;
    start := end + 1;
    mid := size(place);
  in
    place[join([start ... mid, 1 ... end])];

doPermute(p(1), place(1)) :=
  let
    val1 := place[p[1]];
    val2 := place[p[2]];
  in
   setElementAt(setElementAt(place, p[1], val2), p[2], val1);

applyMove(move(1), place(1)) :=
  doSpin(stringToInt(tail(move)), place) when head(move) = 's'
  else doPermute(stringToInt(split(tail(move), '/')) + 1, place) when head(move) = 'x'
  else place;

applyMoves(place(1), moves(2)) :=
  let
    move := head(moves);
    newPlace := applyMove(move, place);
  in
    place when size(moves) = 0
  else applyMoves(newPlace, tail(moves))
;

applyRename(move(1), reverseKind(1)) :=
  doPermute(firstIndexOf(alfabet, takeAway(tail(move), "/")), reverseKind) when head(move) = 'p'
  else reverseKind;

applyRenames(reverseKind(1), moves(2)) :=
  let
    move := head(moves);
    newReverseKind := applyRename(move, reverseKind);
  in
    toKind(reverseKind) when size(moves) = 0
  else applyRenames(newReverseKind, tail(moves))
;

toKind(reverseKind(1))[i] :=
  firstIndexOf(reverseKind, i) foreach i within 1 ... size(reverseKind);

stringify(a(1)) := alfabet[a];

powerTs(ts(2),t(1),f,total) :=
  ts ++ [t] when f*2 > total
  else powerTs(ts ++ [t], t[t], f*2, total);

bits(b(1), pow2, num) :=
  b when num = 0
  else bits(b, pow2 + 1, num / 2) when num mod 2 = 0
  else bits(b ++ [pow2], pow2 + 1, num / 2);

transform(a(1), b(1)) := a[b];
    

main(s(2)) :=
  let
    moves := split(s[1], ',');
    firstPermutation := applyMoves(1 ... size(alfabet), moves);
    firstSubstitution := applyRenames(1 ... size(alfabet), moves);
    finalP := fol(powerTs([], firstPermutation, 1, noOfTimes)[bits([], 1, noOfTimes)], transform);
    finalS := fol(powerTs([], firstSubstitution, 1, noOfTimes)[bits([], 1, noOfTimes)], transform);
  in
    [stringify(firstSubstitution[firstPermutation]),
    stringify(finalS[finalP])]
;

fol<T> : T(2) * (T(1) * T(1) -> T(1)) -> T(1);
fol(inputList(2), operator(0)) :=
                head(inputList) when size(inputList) = 1
        else
                fol(applyFol(inputList, operator), operator);

applyFol<T> : T(2) * (T(1) * T(1) -> T(1)) -> T(2);
applyFol(inputList(2), operator(0))[i] :=
                operator(inputList[i], inputList[i + 1]) when i < size(inputList)
        else
                inputList[i]    
        foreach i within (2 * (0 ... ((size(inputList) - 1) / 2)) + 1);


