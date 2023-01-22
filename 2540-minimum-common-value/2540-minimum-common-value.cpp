class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(),nums1.end());
        for(auto x : nums2){
            if(s1.count(x)) return x;
        }
        return -1;
    }
};