class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string r = "";
        string& f = strs[0];
        if (strs.size() == 1) return strs[0];
        for (int i=0; i<f.length(); i++){
            char t = f[i];
            for (int j=1; j<strs.size(); j++){
                if (strs[j][i] != t) goto returnLabel;
            }
            r.push_back(t);
        }
        returnLabel:
        return r;       
    }
};
