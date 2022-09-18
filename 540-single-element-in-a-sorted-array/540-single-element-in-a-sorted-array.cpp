class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0, e = n-1;
        while(s < e){
            int mid = s + (e-s)/2;
            if(nums[mid] != nums[mid+1] && mid+1 < n && mid-1 >= 0 && nums[mid] != nums[mid-1]) return nums[mid];
            else if((mid%2 == 0 && mid+1 < n && nums[mid] == nums[mid+1]) || 
                    (mid%2 == 1 && nums[mid] == nums[mid-1] && mid-1 >= 0)){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return nums[s];
    }
};