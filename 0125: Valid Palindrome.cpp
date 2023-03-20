class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for (auto&c: s){
            if (isalnum(c)) t.push_back(tolower(c));
        }
        int j = t.length()-1;
        for (int i=0; i<=j; i++){
            if (t[i] != t[j]) return false;
            j--;
        }
        return true;
    }
};
