let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

let minDv = 100000000;
let minP = -1;
process.stdin.on('end', () => {
  let points = s.trim().split("\n");
  for (let i=0; i < points.length; i++) {
    let vals = points[i].split(", ");
    let acc = vals[2].substring(3, vals[2].length-1).split(",").map(Number);
    let dv = Math.abs(acc[0]) + Math.abs(acc[1]) + Math.abs(acc[2]);
    if (dv < minDv) {
      minDv = dv;
      minP = i;
    }
  }
console.log(minP);
});

