class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>nums(heights.begin(),heights.end());
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != nums[i]){
                ans++;
            }
        }
        return ans;
    }
};