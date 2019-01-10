let a = [];

function expand(m) {
  if (m < a.length) return;
  for (let i = a.length; i <= m; i++) {
    a.push(i);
  }
}
  
function union(j, k) {
  let group = j;
  let element = k;
  if (k < j) {
    group = k;
    element = j;
  }
  expand(element);
  
  for (let next = a[element]; next !== group; next = a[element]) {
    if (next < group) {
      element = group;
      group = next;
    } else {
      a[element] = group;
      element = next;
    }
  }
}

function normalize() {
  for (let i=0; i<a.length; i++) {
    a[i] = a[a[i]];
  }
}

let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

process.stdin.on('end', () => {
  let lines = s.trim().split('\n');
  lines.forEach(line => {
    let parts = line.split('<->');
    let n = Number(parts[0].trim());
    parts[1].split(',').forEach(d => {
      union(n, Number(d.trim()));
    });
  });
  normalize();
  console.log(a.filter(e => e == 0).length);
  let groups = new Set();
  a.forEach(e => groups.add(e));
  console.log(groups.size);
});

