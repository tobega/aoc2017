let step = 348;
let a = [0];
let position = 0;

for (let i=1; i <= 2017; i++) {
  position = (position + step) % a.length;
  position++;
  a.splice(position, 0, i);
}
position = (position + 1) % a.length;
console.log(a[position]);

let after0;
position = 0;
for (let i=1; i <= 50000000; i++) {
  position = (position + step) % i + 1;
  if (position === 1) {
    after0 = i;
  }
}
console.log(after0);
