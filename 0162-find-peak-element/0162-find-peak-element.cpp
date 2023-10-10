class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0, h = n-1;
        while(l < h) {
            int mid = (l+h)/2;
            if(mid > 0 && mid < n-1){
                if(nums[mid] >= nums[mid-1] && nums[mid] >= nums[mid+1]){
                    return mid;
                }
                else if(nums[mid-1] > nums[mid]){
                    h = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            else if(mid == 0){
                return nums[0] > nums[1] ? 0 : 1;
            }
            else if(mid == n-1){
                return nums[n-1] > nums[n-2] ? n-1 : n-2;
            }
        }
        return l;
    }
};