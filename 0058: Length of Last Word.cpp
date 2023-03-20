class Solution {
public:
    int lengthOfLastWord(string s) {
        int r=0;
        while (s.back() == ' ') {
            s.pop_back();
        }
        while(!s.empty() && s.back() != ' '){
            s.pop_back(); r++;
        }
        return r;
    }
};
