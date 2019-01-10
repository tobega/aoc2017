import <Utilities/Conversion.sl>;
import <Utilities/Sequence.sl>;

alfabet := "abcdefghijklmnop";
noOfTimes := 10^9;

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

PTResult ::= (remaining: float, p: int32(1), s: int32(1));

powerT(p(1), s(1), f, total) :=
  let nextF := f * 2;
      r := powerT(p[p], s[s], nextF, total);
  in
    (remaining: total - f, p: p, s: s) when nextF > total
  else r when r.remaining < f
  else (remaining: r.remaining -f, p: r.p[p], s: r.s[s]);
    

main(s(2)) :=
  let
    moves := split(s[1], ',');
    firstPermutation := applyMoves(1 ... size(alfabet), moves);
    firstSubstitution := applyRenames(1 ... size(alfabet), moves);
    result := powerT(firstPermutation, firstSubstitution, 1, noOfTimes);
  in
    [stringify(firstSubstitution[firstPermutation]),
    stringify(result.s[result.p])]
;

