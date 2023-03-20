class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool seen = false;
        while (n) {
            if (seen && n&1) return false;
            if (n&1) seen = true;
            n >>= 1;
        }
        return seen;
    }
};
