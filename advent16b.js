let alfabet = "abcdefghijklmnop";
let place = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
let kind = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
let reverseKind = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];

function asString() {
  let s = "";
  for (let i = 0; i < place.length; i++) {
    s += alfabet.charAt(kind[place[i]]);
  }
  return s;  
}

function partOne(s) {
let spin = 0;

function realIndex(i) {
  let r = i - spin;
  while(r<0) r += place.length;
  return r;
}

function move(s) {
  let c = s.charAt(0);
  let args = s.substring(1);
  if (c === 's') {
    const n = Number(args);
    spin = (spin + n) % place.length;
    return;
  }
  let argsArr = args.split("/");
  if (c === 'x') {
    const j = Number(argsArr[0]);
    const k = Number(argsArr[1]);
            let realJ = realIndex(j);
            let realK = realIndex(k);
            let tmp = place[realJ];
            place[realJ] = place[realK];
            place[realK] = tmp;
    return;
  }
  if (c === 'p') {
    const a = alfabet.indexOf(argsArr[0]);
    const b = alfabet.indexOf(argsArr[1]);
            let posA = reverseKind[a];
            let posB = reverseKind[b];
            kind[posA] = b;
            kind[posB] = a;
            reverseKind[b] = posA;
            reverseKind[a] = posB;
    return;
  }
}

function unspun() {
  let b = [];
  for (let i = 0; i < place.length; i++) {
    let a = (place.length + i - spin) % place.length;
    b.push(place[a]);
  }
  return b;  
}

  let moves = s.trim().split(',');
  moves.forEach(m => move(m));
  place = unspun();
}

function partTwo() {
  let shuffle = [];
  let rename = [];

  function transform(b) {
    let np = [];
    for (let i = 0; i < place.length; i++) {
      np.push(place[shuffle[b][i]]);
    }
    place = np;
    let nk = [];
    for (let i = 0; i < place.length; i++) {
      nk.push(kind[rename[b][i]]);
    }
    kind = nk;
  }

// sanity check
  shuffle.push(place);
  rename.push(kind);
//  place = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
//  kind = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
//  transform(0);
//  console.log(asString(), place, kind);

  let remaining = Math.pow(10, 9);
  for(var b = 1; Math.pow(2, b) < remaining; b++) {
    transform(b-1);
    shuffle.push(place);
    rename.push(kind);
  }

  // We've done 2**(b-1)
  b--;
  remaining -= Math.pow(2,b);
  for (b--; b>=0; b--) {
    if (remaining >= Math.pow(2,b)) {
      transform(b);
      remaining -= Math.pow(2,b);
    }
  }
//  console.log(remaining);
}

let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

process.stdin.on('end', () => {
  console.log(asString());
  partOne(s);
  console.log(asString(), place, kind);
  partTwo();
  console.log(asString());
});

