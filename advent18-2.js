let register = [{p:0}, {p:1}];
let pointer = [0, 0];
let stack = [];
let q = [[], []];
let sends = [0,0];

function getRegister(p, x) {
  if (register[p][x] === undefined) {
    register[p][x] = 0;
  }
  return register[p][x];
}

function deref(p, x) {
  return isNaN(Number(x)) ? getRegister(p, x) : Number(x);
}

let command = {};
command.snd = function(p, x) {
  let other = (p === 0) ? 1 : 0;
  q[other].push(deref(p, x));
  pointer[p]++;
  sends[p]++;
  return true;
}

command.set = function(p,x,y) {
  register[p][x] = deref(p, y);
  pointer[p]++;
  return true;
}

command.add = function(p,x,y) {
  register[p][x] = deref(p, x) + deref(p, y);
  pointer[p]++;
  return true;
}

command.mul = function(p,x,y) {
  register[p][x] = deref(p,x) * deref(p,y);
  pointer[p]++;
  return true;
}

command.mod = function(p,x,y) {
  register[p][x] = deref(p,x) % deref(p,y);
  pointer[p]++;
  return true;
}

command.rcv = function(p, x) {
  if (q[p].length === 0) return false;
  register[p][x] = q[p].shift();
  pointer[p]++;
  return true;
}

command.jgz = function(p,x,y) {
  if (deref(p,x) > 0) {
    pointer[p] = pointer[p] + deref(p,y);
  } else {
    pointer[p]++;
  }
  return true;
}

function doCommand(p) {
  if (pointer[p] < 0 || pointer[p] >= stack.length) {
    return false;
  }
  let line = stack[pointer[p]];
  let parts = line.split(" ");
  let args = parts.slice(1);
  return command[parts[0]](p, ...args);
}

let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

process.stdin.on('end', () => {
  stack = s.trim().split("\n");
  let r0 = true;
  let r1 = true;
  while(r0 || r1) {
    r0 = doCommand(0);
    r1 = doCommand(1); 
  }
  console.log(sends[1]);
});

