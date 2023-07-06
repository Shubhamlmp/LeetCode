class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, n = nums.size(), sum = 0, sortPath = INT_MAX;
        while(right < n){
            sum += nums[right];
            if(sum >= target){
                while(sum >= target){
                    sum -= nums[left];
                    left++;
                }
            sortPath = min(sortPath, (right-left+2));
            }
            right++;
        }
        return sortPath == INT_MAX?0:sortPath;
    }
};