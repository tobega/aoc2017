const input = "2	8	8	5	4	2	3	1	5	5	1	2	15	13	5	14";
const testinput = "0	2	7	0";

function distribute(a) {
  let max = 0;
  for (let i=1; i < a.length; i++) {
    if (a[i] > a[max]) max = i;
  }
  const todistribute = a[max];
  a[max] = 0;
  for (let i=1; i <= todistribute; i++) {
    let index = (max + i) % a.length;
    a[index]++;
  }
}

let banks = input.split("	").map(Number);
let banks_hash = JSON.stringify(banks);
let history = new Map();
let cycles = 0;
do {
  history.set(banks_hash, cycles);
  cycles++;
  distribute(banks);
  banks_hash = JSON.stringify(banks);
} while (!history.has(banks_hash));
console.log(cycles);
console.log(cycles - history.get(banks_hash));

