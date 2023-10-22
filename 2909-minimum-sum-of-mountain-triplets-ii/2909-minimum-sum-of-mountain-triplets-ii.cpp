class Solution {
public:
    int minimumSum(vector<int>& nums) {
        vector<int>leftMin(nums.size(), nums.front());
        for(int i = 1; i < nums.size(); i++){
            leftMin[i] = min(nums[i], leftMin[i-1]);
        }
        
        vector<int>rightMin(nums.size(), nums.back());
        for(int i = nums.size()-2; i >= 0; i--){
            rightMin[i] = min(nums[i], rightMin[i+1]);
        }
        
        int ans = INT_MAX;
        
        for(int i = 1; i < nums.size()-1; i++){
            if(nums[i] > leftMin[i-1] && nums[i] > rightMin[i+1]){
                ans = min(ans, (leftMin[i-1] + nums[i] + rightMin[i+1]));
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};