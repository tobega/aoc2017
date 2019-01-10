let bs = [];
for (let i = 106700; i <= 106700 + 17000; i += 17) bs.push(i);

let all = bs.length;
let highest_factor = Math.sqrt(106700 + 17000);
for (let i=2; i <= highest_factor; i++) {
  bs = bs.filter(b => b % i != 0);
}

console.log(all, all - bs.length);

