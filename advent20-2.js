let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

let points;

function getAxes(p) {
  let vals = p.split(", ").map(s => s.substring(3, s.length-1)).map(s => s.split(",")).map(a => a.map(Number));
  return [vals.map(a=>a[0]), vals.map(a=>a[1]), vals.map(a=>a[2])];
}

function linear(b, c) {
  if (b === 0) return () => (c === 0);
  return [-c/b];
}

function roots(da, dv, dp) {
  if (da === 0) return linear(dv, dp);
  let b = dv + da/2;
  let d = b*b - 2*da*dp;
  if (d < 0) return [];
  let s = Math.sqrt(d);
  return [(-b-s)/da, (-b+s)/da];
}

function findCollision(v1, v2) {
  return roots(v1[2] - v2[2], v1[1] - v2[1], v1[0] - v2[0]);
}

function detectCollision(p1, p2) {
  let rootsX = findCollision(p1[0],  p2[0]);
  let rootsY = findCollision(p1[1],  p2[1]);
  let rootsZ = findCollision(p1[2],  p2[2]);
  let roots = [rootsX, rootsY, rootsZ];
  let a = roots.find(Array.isArray);
  if (a === undefined) return []; // Maybe not ??
  roots = roots.map(r => Array.isArray(r) ? (e) => r.includes(e) : r);
  return a.filter(roots[0]).filter(roots[1]).filter(roots[2]).filter(n => n >=0).filter(Number.isInteger);
}

let collisions = [];
process.stdin.on('end', () => {
  points = s.trim().split("\n");
  for (let i=0; i < points.length - 1; i++) {
    let p1Axes = getAxes(points[i]);
    for (let j=i+1; j < points.length; j++) {
      let p2Axes = getAxes(points[j]);
      let hits = detectCollision(p1Axes, p2Axes).map((t) => {
        return {time: t, points: [i,j]};
      });
      collisions.push(...hits);
    }
  }
  collisions.sort((a,b) => a.time - b.time);
  let remaining = new Set();
  for (let i=0; i < points.length; i++) remaining.add(i);
  while (collisions.length > 0) {
    let t = collisions[0].time;
    let toRemove = [];
    while (collisions.length > 0 && t === collisions[0].time) {
      toRemove.push(collisions.shift());
    }
    toRemove = toRemove.filter((c) => {
      return remaining.has(c.points[0]) && remaining.has(c.points[1]);
    });
    toRemove.forEach((c) => {
      remaining.delete(c.points[0]);
      remaining.delete(c.points[1]);
    });
  }
  console.log(remaining.size);
});

