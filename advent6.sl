import <Utilities/Conversion.sl>;
import <Utilities/Sequence.sl>;
import <Utilities/String.sl>;

trim(s(1)) :=
  trim(tail(s)) when isWhiteSpace(head(s))
  else trim(allButLast(s)) when isWhiteSpace(last(s))
  else s;

foldMaxIndex : int32(1) * number(1) -> int32(1);
foldMaxIndex(indexList(1), inputList(1))[i] :=
                indexList[i] when i = size(inputList) or inputList[indexList[i]] >= inputList[indexList[i + 1]]
        else
                indexList[i + 1]    
        foreach i within (2 * (0 ... ((size(indexList) - 1) / 2)) + 1);

applyMaxIndex : int32(1) * number(1) -> int32;
applyMaxIndex(indexList(1), inputList(1)) :=
                head(indexList) when size(indexList) = 1
        else
                applyMaxIndex(foldMaxIndex(indexList, inputList), inputList);    

maxIndex : number(1) -> int32;
maxIndex(a(1)) := applyMaxIndex(1 ... size(a), a);

redistribution(a(1), m, toEach, extra)[i] :=
  toEach when i = m
  else a[i] + toEach + 1 when i > m and i <= (m + extra)
  else a[i] + toEach + 1 when i <= (m + extra - size(a))
  else a[i] + toEach;

redistribute(a(1)) :=
  let m := maxIndex(a);
      toDistribute := a[m];
      toEach := toDistribute / size(a);
      extra := toDistribute mod size(a);
  in redistribution(a, m, toEach, extra);

floyd(tortoise(1), hare(1)) :=
  let newTortoise := redistribute(tortoise);
      newHare := redistribute(redistribute(hare));
  in newHare when equalList(newTortoise, newHare)
  else floyd(newTortoise, newHare);

StepRecord ::= (steps: int32(0), state: int32(1));

moveToMeetHelper : int32(1) * int32(1) * int32 -> StepRecord;
moveToMeetHelper(a(1), b(1), count(0)) :=
  let newA := redistribute(a);
      newB := redistribute(b);
  in (steps: count, state: copy(a)) when equalList(a,b)
  else moveToMeetHelper(newA, newB, (count + 1));

moveToMeet : int32(1) * int32(1) -> StepRecord;
moveToMeet(a(1), b(1)) := moveToMeetHelper(a,b,0);

findStartOfCycle(a(1)) :=
  let hare := floyd(a, copy(a));
  in moveToMeet(a, hare);

countCycle(a(1), start(1), count(0)) :=
  let newA := redistribute(a);
  in (count + 1) when equalList(newA, start)
  else countCycle(newA, start, (count + 1));

copy(a(1))[i] := a[i];

main(s(2)) :=
  let
    regs := stringToInt(split(trim(s[1]), '\t'));
    start := findStartOfCycle(regs);
    cycle := countCycle(start.state, copy(start.state), 0);
  in
    [start.steps + cycle, cycle]
;

