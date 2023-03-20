class Solution {
public:
    void increment(vector<int>& v, int i){
        if (i == 0) {
            if (v[i] == 9) {
                v[i] = 0; 
                v.insert(v.begin(), 1);
            }
            else v[i]++;
            return;
        }
        if (v[i] == 9){
            v[i] = 0;
            if (v[i-1] == 9) increment(v, i-1);w
            else v[i-1]++;
        } else v[i]++;
        return;
    }

    vector<int> plusOne(vector<int>& digits) {
        increment(digits, digits.size()-1);
        return digits;
    }
};
