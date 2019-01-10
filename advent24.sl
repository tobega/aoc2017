import <Utilities/Conversion.sl>;
import <Utilities/Sequence.sl>;
import <Utilities/Set.sl>;
import <Utilities/Math.sl>;

testinput := [
"0/2",
"2/2",
"2/3",
"3/4",
"3/5",
"0/1",
"10/1",
"9/10"
];

input := [
"24/14",
"30/24",
"29/44",
"47/37",
"6/14",
"20/37",
"14/45",
"5/5",
"26/44",
"2/31",
"19/40",
"47/11",
"0/45",
"36/31",
"3/32",
"30/35",
"32/41",
"39/30",
"46/50",
"33/33",
"0/39",
"44/30",
"49/4",
"41/50",
"50/36",
"5/31",
"49/41",
"20/24",
"38/23",
"4/30",
"40/44",
"44/5",
"0/43",
"38/20",
"20/16",
"34/38",
"5/37",
"40/24",
"22/17",
"17/3",
"9/11",
"41/35",
"42/7",
"22/48",
"47/45",
"6/28",
"23/40",
"15/15",
"29/12",
"45/11",
"21/31",
"27/8",
"18/44",
"2/17",
"46/17",
"29/29",
"45/50"
];

pipes := stringToInt(split(input,'/'));

possiblePipes(pipes(2), connector(0))[i] :=
  i when elementOf(connector, pipes[i]);

without(pipes(2), j(0))[i] := pipes[i] when i /= j;

connectArrange(pipe(1), c(0)) :=
  [pipe[1], pipe[2]] when pipe[2] = c
  else [pipe[2], pipe[1]];

addPipe(pipe(1), line(1)) :=
  pipe ++ line;

build(line(1), pipes(2)) :=
  let
    connector := head(line);
    p := possiblePipes(pipes, connector);
    newLines := addPipe(connectArrange(pipes[p], connector), line);
    newPipes := without(pipes, p);
  in
    [line] when size(p) = 0
  else join(build(newLines, newPipes));

part1 := vectorMax(sum(build([0],pipes)));

longestStrongest(left(1), right(1)) :=
  let
    lengthDiff := size(right) - size(left);
    strengthDiff := sum(right) - sum(left);
  in
    right when lengthDiff > 0
  else left when lengthDiff < 0
  else right when strengthDiff > 0
  else left;

selectLongestStrongest(left(1), remaining(2)) :=
  let
    right:= head(remaining);
    rest := tail(remaining);
    winner := longestStrongest(left, right);
  in
    winner when size(rest) = 0
  else selectLongestStrongest(winner, rest);

part2 :=
  let
    bridges := build([0],pipes);
  in
    sum(selectLongestStrongest([], bridges));

