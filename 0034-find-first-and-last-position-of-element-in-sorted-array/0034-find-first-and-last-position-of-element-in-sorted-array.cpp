class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int l = 0, h = nums.size()-1;
        while(l <= h){
            int mid = (l+h)/2;
            if(nums[mid] == target){
                ans[0] = mid;
                h = mid-1;
            }
            else if(nums[mid] > target){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        l = 0; h = nums.size()-1;
        while(l <= h){
            int mid = (l+h)/2;
            if(nums[mid] == target){
                ans[1] = mid;
                l = mid+1;
            }
            if(nums[mid] > target){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};