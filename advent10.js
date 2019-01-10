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

  const data = "83,0,193,1,254,237,187,40,88,27,2,255,149,29,42,100";
  let r = new Rope(256);
  data.split(",").map(Number).forEach(n => r.knot(n));
  console.log(r.checksum());

  let hash = new Rope(256);
  let seq = [];
  for (let i=0; i<data.length; i++) seq.push(data.charCodeAt(i));
  "17, 31, 73, 47, 23".split(",").map(Number).forEach(n => seq.push(n));
  for (let round = 0; round < 64; round++) {
    seq.forEach(n => hash.knot(n));
  }
  console.log(hash.hash());

