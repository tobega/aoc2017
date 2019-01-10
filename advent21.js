function flip(key) {
  return key.split("/").reverse().join("/");
}

function rot(key) {
  let rows = key.split("/");
  return rows.map((r, i) => i)
    .map(i => rows.reduce((s, r) => r.charAt(i) + s, "")).join("/");
}

function antirot(key) {
  let rows = key.split("/");
  return rows.map((r, i) => i).reverse()
    .map(i => rows.reduce((s, r) => s + r.charAt(i), "")).join("/");
}

let transforms = [flip, rot, flip, antirot, flip, rot, flip];

function allForms(key) {
  return transforms.reduce((a,t) => {
    a.unshift(t(a[0]));
    return a;
  }, [key]);
}

let grid = [[".#./..#/###"]];
let size = 3;

let rules = new Map();

function fragmentGrid() {
  let lattice = [];
  grid.forEach((row) => {
    row.map(key => key.split("/")).reduce((rowset, a) => {
      return rowset.map((r,i) => r + a[i]);
    }).forEach(newrow => lattice.push(newrow));
  });
  grid = [];
  for (let i=0; i<lattice.length; i+=2) {
    let row = [];
    for (let j=0; j<lattice[i].length; j+=2) {
      let key = lattice[i].substr(j,2) + "/" + lattice[i+1].substr(j,2);
      row.push(key);
    }
    grid.push(row);
  }
}
      
function transformGrid() {
  size += grid.length;
  grid = grid.map((row) => {
    return row.map((key) => {
      return allForms(key).map((k) => rules.get(k)).find(q => q !== undefined);
    });
  });
}

function enhanceGrid() {
  if (size % 2 === 0) {
    fragmentGrid();
  }
  transformGrid();
}

function count1s() {
  return grid.reduce((total, row) => {
    return total + row.reduce((subt, key) => {
      let non1s = /[./]/g;
      return subt + key.replace(non1s, "").length;
    }, 0);
  }, 0);
}

let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

process.stdin.on('end', () => {
  s.trim().split("\n").forEach((line) => {
    rules.set(...line.split(" => "));
  });
  for (let i=0; i < 18; i++) {
    enhanceGrid();
  }
  console.log(count1s());
});

