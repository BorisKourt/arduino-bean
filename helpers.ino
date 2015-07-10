String sanitizeSensor(long val) {

  // Makes a simple 'data structure' to pass a single axis.
  String ret, front, out;
  long cur = val;

  // Check if the value is negative or positive.
  if (val >= 0) {
    front = "1";
  } else {
    cur = abs(val);
    front = "2";
  }

  // Cap value to three digits
  if (cur < 10) {
    out = String("00" + String(cur, DEC));
  } else if (cur < 100) {
    out = String("0" + String(cur, DEC));
  } else if (cur > 999) {
    out = String("999");
  } else {
    out = String(cur, DEC);
  }

  // Return a string that ends with 1 for positive or 2 for negative.
  ret = String(front + out);
  return ret;
}
