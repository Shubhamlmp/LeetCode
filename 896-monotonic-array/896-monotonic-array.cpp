class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increase = 0;
        int decrease = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] >= nums[i+1]) increase++;
            if(nums[i] <= nums[i+1]) decrease++;
        }
        return (increase+1 == nums.size() || decrease+1 == nums.size()) ? true : false;
    }
};