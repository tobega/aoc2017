import <Utilities/Conversion.sl>;
import <Utilities/Math.sl>;
import <Utilities/Sequence.sl>;

input := 277678;

position(n(0)) :=
  let radius := floor(ceiling(sqrt(n)) / 2);
      ringSize := radius * 2 + 1;
      onCircumference := floor(n - (ringSize - 2)^2); 
      side := ceiling(intToFloat(onCircumference) / (ringSize - 1));
      adjust := ((onCircumference - 1) mod (ringSize - 1)) + 1;
      other := radius - adjust;
  in [0,0] when n = 1
     else [radius, -other] when side = 1
     else [other, radius] when side = 2
     else [-radius, other] when side = 3
     else [-other, -radius];

offset := 50;

createField()[i,j] := 1 when i = offset and j = offset
  else 0
  foreach i within 1 ... (offset * 2),
          j within 1 ... (offset * 2);

updateField(pos(1), field(2), val(0))[i,j] :=
  val when i = pos[1] and j = pos[2]
  else field[i,j];

nextSpiralPoint(i(0), field(2), n(0)) :=
  let pos := position(i) + offset;
      indicesAround := transpose([pos - 1, pos, pos + 1]);
      val := sum(join(field[indicesAround[1], indicesAround[2]]));
      newField := updateField(pos, field, val);
  in val when val > n
     else nextSpiralPoint(i+1, newField, n);

findLarger(n(0)) :=
  let field := createField();
  in field[offset,offset] when n = 0
     else nextSpiralPoint(2, field, n);

main(s(2)) :=
  [sum(abs(position(input))), findLarger(input)];

