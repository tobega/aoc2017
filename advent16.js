let alfabet = "abcdefghijklmnop";
let a = alfabet.split("");
//a = "abcde".split("");

let move = {}
move.s = function(n) {
  for (let i = 0; i < n; i++) {
    a.unshift(a.pop());
  }
}
move.x = function(j, k) {
  let t = a[j];
  a[j] = a[k];
  a[k] = t;
}
move.p = function(e, f) {
  move.x(a.indexOf(e), a.indexOf(f));
}

let parse = {
  s: function(s) {
       return [Number(s)];
     },
  x: function(s) {
       return s.split("/").map(Number);
     },
  p: function(s) {
       return s.split("/");
     }
}

function doMove(m) {
  let c = m.charAt(0);
  let args = parse[c](m.substr(1));
  move[c](...args);
}

let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

process.stdin.on('end', () => {
  let moves = s.trim().split(',');
  moves.forEach(doMove);
  console.log(a.join(""));
  for (let i=1; i < 1000000000; i++) {
    moves.forEach(doMove);
  }
  console.log(a.join(""));
});

