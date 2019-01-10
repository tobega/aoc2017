const move = {
  ne: function(p) {
    return {
      x: p.x + Math.abs(p.y % 2),
      y: p.y - 1
    }
  },
  se: function(p) {
    return {
      x: p.x + Math.abs(p.y % 2),
      y: p.y + 1
    }
  },
  nw: function(p) {
    return {
      x: p.x - 1 + Math.abs(p.y % 2),
      y: p.y - 1
    }
  },
  sw: function(p) {
    return {
      x: p.x - 1 + Math.abs(p.y % 2),
      y: p.y + 1
    }
  },
  n: function(p) {
    return {
      x: p.x,
      y: p.y - 2
    }
  },
  s: function(p) {
    return {
      x: p.x ,
      y: p.y + 2
    }
  },
};

function distance(p, q) {
  let h = Math.abs(q.x - p.x) * 2;
  if (p.x <= q.x) {
    h += Math.abs(q.y % 2) - Math.abs(p.y % 2);
  } else {
    h += Math.abs(p.y % 2) - Math.abs(q.y % 2);
  }
  let v = Math.abs(q.y - p.y);
  let m = h;
  if (v > h) m += (v - h) / 2;
  return m;
}

let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

process.stdin.on('end', () => {
  let p = {x:0,y:0};
  let max_d = 0;
  s.trim().split(',').forEach(m => {
    p = move[m](p);
    let d = distance({x:0,y:0}, p);
    if (d > max_d) max_d = d;
  });
  console.log(distance({x:0,y:0}, p), max_d);
});


