class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff = nums[1] - nums[0];
        int minn = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            maxdiff = max(maxdiff, nums[i] - minn);
            minn = min(nums[i], minn);
            
        }
        if(maxdiff > 0) return maxdiff;
        else return -1;
    }
};