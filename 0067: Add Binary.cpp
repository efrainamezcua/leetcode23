class Solution {
public:
  string addBinary(string a, string b) {
    int aL = a.length(), bL = b.length(), s = min(aL, bL);
    string r = "";
    char p, q, one = '1', zero = '0', carry = '0';
    for (int i = 0; i < s; i++) {
      p = a.back(), q = b.back();
      a.pop_back();
      b.pop_back();

      if ((p == zero && q == one && carry == zero) ||
          (p == one && q == zero && carry == zero) ||
          (carry == one && p == zero && q == zero)) {
        r.insert(r.begin(), one);
        carry = zero;
      } else if ((p == zero && q == one && carry == zero) ||
                 (p == one && q == one && carry == zero) ||
                 (p == one && q == zero && carry == one)) {
        r.insert(r.begin(), zero);
        carry = one;
      } else if (p == one && q == one && carry == one) {
        r.insert(r.begin(), one);
      } else {
        r.insert(r.begin(), zero);
      }
    }
    string t = ""; 
    if (a.length() > 0) t=a;
    if (b.length() > 0) t=b;
    while (t.length() > 0) {
      p = t.back();
      t.pop_back();
      if (carry == one) {
        if (p == one) {
          r.insert(r.begin(), zero);
        } else {
          r.insert(r.begin(), one);
          carry = zero;
        }
      } else {
        r.insert(r.begin(), p);
      }
    }
    if (carry == one)
      r.insert(r.begin(), one);
    return r;
  }
};
