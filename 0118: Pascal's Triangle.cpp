class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows, vector<int>());
        r[0].push_back(1);
        for (int i=1; i<numRows; i++){
            for (int j=0; j<i+1; j++){
                if (j == 0 || j == i)r[i].push_back(1);
                else r[i].push_back(r[i-1][j-1] + r[i-1][j]);
            }
        }
        return r;
    }
};
