class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = -1;
        for(int i = 0; i < nums.size(); i++){
            if(i != nums[i]){
                ans = i;
                break;
            }
        }
        if(ans == -1) ans = nums.size();
        return ans;
    }
};