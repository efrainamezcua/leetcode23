class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int r = 0; map<char, int> vowels; vowels['a'] = 1; vowels['e'] = 1; vowels['i'] = 1;vowels['o'] = 1;vowels['u'] = 1;
        for (int i=left; i<=right; i++){
            if (vowels[words[i][0]] == 1 && vowels[words[i].back()] == 1) r++;
        }
        return r;
    }
};
