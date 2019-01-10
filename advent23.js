let register = {};
let pointer = 0;
let stack;

function getRegister(x) {
  if (register[x] === undefined) {
    register[x] = 0;
  }
  return register[x];
}

function deref(x) {
  return isNaN(Number(x)) ? getRegister(x) : Number(x);
}

let command = {};
command.set = function(x,y) {
  register[x] = deref(y);
  pointer++;
}

command.sub = function(x,y) {
  register[x] = deref(x) - deref(y);
  pointer++;
}

let mulsDone = 0;

command.mul = function(x,y) {
  mulsDone++;
  register[x] = deref(x) * deref(y);
  pointer++;
}

command.jnz = function(x,y) {
  if (deref(x) != 0) {
    pointer = pointer + deref(y);
  } else {
    pointer++;
  }
}

function doCommand(line) {
  let parts = line.split(" ");
  let args = parts.slice(1);
  command[parts[0]](...args);
}

let s = "";
process.stdin.on('readable', () => {
  let chunk = process.stdin.read();
  if (chunk !== null) s += chunk.toString();
});

process.stdin.on('end', () => {
  stack = s.trim().split("\n");
  while(pointer >= 0 && pointer < stack.length) {
    doCommand(stack[pointer]);
  }
  console.log(mulsDone);
});

