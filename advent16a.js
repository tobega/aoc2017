let alfabet = "abcdefghijklmnop";
let state = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
let reverseLookup = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
let spin = 0;

function realIndex(i) {
  let r = i - spin;
  while(r<0) r += state.length;
  return r;
}

function toMove(s) {
  let c = s.charAt(0);
  let args = s.substring(1);
  if (c === 's') {
    const n = Number(args);
    return function() {
      spin = (spin + n) % state.length;
    };
  }
  let argsArr = args.split("/");
  if (c === 'x') {
    const j = Number(argsArr[0]);
    const k = Number(argsArr[1]);
    return function() {
            let realJ = realIndex(j);
            let realK = realIndex(k);
            let tmp = state[realJ];
            state[realJ] = state[realK];
            state[realK] = tmp;
            reverseLookup[state[realJ]] = realJ;
            reverseLookup[state[realK]] = realK;
    };
  }
  if (c === 'p') {
    const a = alfabet.indexOf(argsArr[0]);
    const b = alfabet.indexOf(argsArr[1]);
    return function() {
            let realJ = reverseLookup[a];
            let realK = reverseLookup[b];
            state[realJ] = b;
            state[realK] = a;
            reverseLookup[b] = realJ;
            reverseLookup[a] = realK;
    };
  }
}

function asString() {
  let s = "";
  for (let i = 0; i < state.length; i++) {
    let a = (state.length + i - spin) % state.length;
    s += alfabet.charAt(state[a]);
  }
  return s;  
}

let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

process.stdin.on('end', () => {
  console.log(asString());
  let moves = s.trim().split(',').map(toMove);
  moves.forEach(m => m());
  console.log(asString());
  for (let i=1; i < 2000; i++) {
    moves.forEach(m => m());
  }
  console.log(asString());
});

