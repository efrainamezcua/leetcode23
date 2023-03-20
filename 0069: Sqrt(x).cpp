class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x, m;
        while (l <= r){
            m = l + ((r-l)/2);
            if (m*m < x){
                l = m+1;
                
            } else if (m*m == x){
                return m;
            } else { //nums[m] > target
                r = m-1;
            }
        }
        return l;
    }
};
