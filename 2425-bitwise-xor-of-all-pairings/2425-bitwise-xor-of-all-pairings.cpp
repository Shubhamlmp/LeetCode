class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x = 0, y = 0;
        for(auto i : nums1){
            x ^= i;
        }
        for(auto i : nums2){
            y ^= i;
        }
        
        return (nums1.size()%2 * y)^(nums2.size()%2 * x);
    }
};