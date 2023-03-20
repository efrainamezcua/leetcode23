#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int length = s.length();
        string r = "";
        for (int i= length-1; i >=0; i--){
            r += s[i];
        }
        if (s==r) return true;
        return false;
    }
};
