let a = [699, 16807, 4];
let b = [124, 48271, 8];
let modulus = 2147483647;
let mask = parseInt('ffff', 16);

function next(g) {
  g[0] = (g[0] * g[1]) % modulus;
  return g[0];
}

function next_acceptable(g) {
  let c = next(g);
  while (c % g[2] != 0) {
    c = next(g);
  }
  return c;
}

let total = 0;
for (let i = 0; i < 5000000; i++) {
  let ca = next_acceptable(a) & mask;
  let cb = next_acceptable(b) & mask;
  if (ca === cb) total++;
}
console.log(total);

