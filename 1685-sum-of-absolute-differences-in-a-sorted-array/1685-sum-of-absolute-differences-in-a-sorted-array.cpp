class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>pref(n);
        pref[0] = nums[0];
        
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + nums[i];
        }
        
        vector<int>ans(n);
        
        for(int i = 0; i < n; i++){
            int lSum = pref[i] - nums[i];
            int rSum = pref[n-1] - pref[i];
            
            int lCount = i;
            int rCount = n-i-1;
            
            int lTotal = (nums[i]*lCount) - lSum;
            int rTotal = rSum - (nums[i]*rCount);
            
            ans[i] = lTotal + rTotal; 
        }
        return ans;
    }
};