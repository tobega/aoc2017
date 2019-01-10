let tape = new Set();
let currentPosition = 0;
let currentKey = "p" + currentPosition;
let currentState = "A";
let currentValue0 = false;

function write1() {
  tape.add(currentKey);
}

function write0() {
  tape.delete(currentKey);
}

function moveLeft() {
  currentPosition--;
  currentKey = "p" + currentPosition;
}

function moveRight() {
  currentPosition++;
  currentKey = "p" + currentPosition;
}

let state = {};

state.A = function() {
  if (currentValue0) {
    write1();
    moveRight();
    currentState = "B";
  } else {
    write0();
    moveRight();
    currentState = "F";
  }
}

state.B = function() {
  if (currentValue0) {
    write0();
    moveLeft();
    currentState = "B";
  } else {
    write1();
    moveLeft();
    currentState = "C";
  }
}

state.C = function() {
  if (currentValue0) {
    write1();
    moveLeft();
    currentState = "D";
  } else {
    write0();
    moveRight();
    currentState = "C";
  }
}

state.D = function() {
  if (currentValue0) {
    write1();
    moveLeft();
    currentState = "E";
  } else {
    write1();
    moveRight();
    currentState = "A";
  }
}

state.E = function() {
  if (currentValue0) {
    write1();
    moveLeft();
    currentState = "F";
  } else {
    write0();
    moveLeft();
    currentState = "D";
  }
}

state.F = function() {
  if (currentValue0) {
    write1();
    moveRight();
    currentState = "A";
  } else {
    write0();
    moveLeft();
    currentState = "E";
  }
}

function step() {
  currentValue0 = !tape.has(currentKey);
  state[currentState]();
}

for (let i=0; i < 12425180; i++) {
  step();
}

console.log(tape.size);

