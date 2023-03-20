class Solution {
public:
    long long converter(int decimal, int targetBase = 3){
        long long r = 0, coefficient = 1;
        while (decimal > 1){
            r+= (decimal % targetBase) * coefficient;
            decimal /= targetBase; coefficient *= 10;
        }
        return r;

    }

    bool checkPowersOfThree(int n) {
        string converted = to_string(converter(n));
        for (auto& c: converted){
            if (c != '0' && c!= '1') return false;
        }
        return true;
    }
};
