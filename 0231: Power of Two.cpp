class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool seen = false;
        if (n&1) return n == 1 ? true: false; n >>= 1;
        while (n) {
            if (seen && n&1) return false;
            if (n&1) seen = true;
            n >>= 1;
        }
        return seen;
    }
};
