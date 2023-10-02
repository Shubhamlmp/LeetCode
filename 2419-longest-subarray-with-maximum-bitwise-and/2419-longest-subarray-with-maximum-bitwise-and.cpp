class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        int len = 0;
        int maxEle = *max_element(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == maxEle){
                len++;
                ans = max(ans, len);
            }
            else{
                len = 0;
            }
        }
        return ans;
    }
};