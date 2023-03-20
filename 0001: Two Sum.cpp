class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_set<int> s;
        for (auto& t:nums) s.insert(t);
        for (int i=0; i<nums.size(); i++){
            int c = target - nums[i];
            if ((s.count(c)) && ()) {
                for (int j=0; j<nums.size(); j++){
                    if (j==i) continue;
                    if (nums[j] == c) v.push_back(j);
                }
                v.push_back(i); 
                goto landing;
                }
        }
        
        landing: 
        return v;
    }
};
