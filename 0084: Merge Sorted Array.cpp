class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0) {
            nums2.swap(nums1); return;
        }
        for (int i=0; i<n; i++) nums1.pop_back();
        auto i=nums1.begin(), j=nums2.begin();
        while (j != nums2.end()){
                if ((i != nums1.end())&&(*j <= *i)){
                    nums1.insert(i, *j);
                    j++;
                } else if (i+1 == nums1.end()){
                    nums1.insert(i+1, *j);
                    j++;
                } else {
                    i++;
                }
        }
        return;
    }
};
