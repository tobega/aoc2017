let a = [];

function expand(m) {
  if (m < a.length) return;
  for (let i = a.length; i <= m; i++) {
    a.push(0);
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
    let parts = line.split(':');
    let n = Number(parts[0].trim());
    let d = Number(parts[1].trim());
    expand(n);
    a[n] = d;
  });
  let severity = 0;
  for (let i = 0; i < a.length; i++) {
    if (a[i] !== 0) {
      let cycle = 2 * (a[i] - 1);
      if (i % cycle === 0) {
        severity += i * a[i];
      }
    }
  }
  console.log(severity);
  for (let delay = 1000000; delay < 1000000000; delay++) {
    let caught = false;
    for (let i = 0; i < a.length; i++) {
      if (a[i] !== 0) {
        let cycle = 2 * (a[i] - 1);
        if ((delay + i) % cycle === 0) {
          caught = true;;
          break;
        }
      }
    }
    if (!caught) {
      console.log(delay);
      break;
    }
  }
});

