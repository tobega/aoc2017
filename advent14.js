function Rope(length) {
  for (let i = 0; i < length; i++) {
    this.push(i);
  }
}

Rope.prototype = Object.create(Array.prototype, {
  twist: {
    value: function(loop) {
      const start = (loop < 0) ? this.length + loop - 1 : -1;
      const end = (loop < 0) ? this.length : loop;
      for (let i = 1; i <= Math.abs(loop) / 2; i++) {
        const temp = this[start + i];
        this[start + i] = this[end - i];
        this[end - i] = temp;
      }
      return this;
    }
  },
  skip: {
    value: 0,
    writable:true
  },
  offset: {
    value: 0,
    writable:true
  }
});

Rope.prototype.roll = function(count) {
    // trick: reverse the two parts then reverse all
    count = count % this.length;
    other = count - this.length;
    if (count < 0) {
      other = count;
      count = count + this.length;
    }
    this.offset = (this.offset + count) % this.length;
    this.twist(count);
    this.twist(other);
    this.twist(this.length);
    return this;
  };

Rope.prototype.knot = function(loop) {
  this.twist(loop);
  this.roll(loop + this.skip);
  this.skip = (this.skip +1) % this.length;
};

Rope.prototype.checksum = function() {
  const firstIndex = (this.length - this.offset) % this.length;
  const secondIndex = (firstIndex + 1) % this.length;
  return this[firstIndex] * this[secondIndex];
};

Rope.prototype.hash = function() {
  this.roll(-this.offset);
  let s = "";
  for (let i=0; i<this.length; i+=16) {
    let digit = 0
    for (let j=0; j<16; j++) {
      digit ^= this[i+j];
    }
    let hex = ("0" + digit.toString(16)).slice(-2);
    s += hex;
  }
  return s;
};


Rope.prototype.constructor = Rope;

const bits = {
  "0": 0,
  "1": 1,
  "2": 1,
  "3": 2,
  "4": 1,
  "5": 2,
  "6": 2,
  "7": 3,
  "8": 1,
  "9": 2,
  "a": 2,
  "b": 3,
  "c": 2,
  "d": 3,
  "e": 3,
  "f": 4
}

function knotHash(data) {
  let hash = new Rope(256);
  let seq = [];
  for (let i=0; i<data.length; i++) seq.push(data.charCodeAt(i));
  "17, 31, 73, 47, 23".split(",").map(Number).forEach(n => seq.push(n));
  for (let round = 0; round < 64; round++) {
    seq.forEach(n => hash.knot(n));
  }
  return hash.hash();
}

const input = "jxqlasbh";
//const input = "flqrgnkx";
let total = 0;
for (let i=0; i < 128; i++) {
  let seed = input + "-" + i;
  let hash = knotHash(seed);
  let used = hash.split("").map(c => bits[c]).reduce((sum, item) => sum + item);
  total += used;
}
console.log(total);

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

for (let i=0; i < 128; i++) {
  let seed = input + "-" + i;
  let hash = knotHash(seed);
  for (j = 0; j < 32; j++) {
    let c = parseInt(hash.charAt(j), 16);
    for (let k = 0; k < 4; k++) {
      let index = i * 128 + j * 4 + k;
      let m = 8 >>> k;
      if (m & c) {
        a.push(index);
        if (j * 32 + k > 0) {
          let neighbour = index - 1;
          if (a[neighbour] > -1) {
            union(index, neighbour);
          }
        }
        if (i > 0) {
          let neighbour = index - 128;
          if (a[neighbour] > -1) {
            union(index, neighbour);
          }
        }
      } else {
        a.push(-1);
      }
    }
  }
}

normalize();
  let groups = new Set();
  a.forEach(e => groups.add(e));
  console.log(groups.size - 1);

