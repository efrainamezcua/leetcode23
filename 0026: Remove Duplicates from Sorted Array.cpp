class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 1, fast = 1;
        for (; fast < nums.size(); fast++){
            if (nums[fast] != nums[slow - 1]){
                nums[slow] = nums[fast];
                slow++;
            } 
        }
        return slow;
    }
};
