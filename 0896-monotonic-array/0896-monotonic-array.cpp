class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increasing = 0;
        int decreasing = 0;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] <= nums[i+1]) increasing++;
            if(nums[i] >= nums[i+1]) decreasing++;
        }
        return (increasing+1 == nums.size() || decreasing+1 == nums.size()) ? true : false;
    }
};