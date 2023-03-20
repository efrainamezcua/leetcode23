class Solution {
public:

    int hammingWeight(uint32_t n) {
        uint32_t r=0;
        while (n){
            r+= (n & 1); n >>= 1;
        }
        return r;
    }
};
