class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = 999;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < ans){
                ans = nums[i];
            }
        }
        return ans;
    }
};