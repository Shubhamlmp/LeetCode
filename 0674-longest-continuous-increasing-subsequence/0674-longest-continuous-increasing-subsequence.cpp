class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return n;
        
        int ans = 1, count = 1;
        for(int i = 0; i < n-1; i++){
            if(nums[i] < nums[i+1]){
                count++;
                ans = max(ans,count);
            }
            else{
                count = 1;
            }
        }
        return ans;
    }
};