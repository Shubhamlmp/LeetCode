class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int windowSize = k * 2 + 1;
        vector<int>ans(n, -1);
        if(n < windowSize){
            return ans;
        }
        
        vector<long long>preSum(n+1, 0);
        preSum[1] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            preSum[i+1] = preSum[i]+nums[i];
        }
        int j = 0;
        for(int i = k; i+k < n; i++){
            ans[i] = (preSum[i+k+1] - preSum[j++])/windowSize;
        }
        return ans;
    }
};