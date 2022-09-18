class Solution {
public:
    bool search(vector<int>& nums, int key) {
        int l = 0;
        int h = nums.size()-1;
        while(l <= h){
            int mid = l + (h-l)/2;
            if(nums[mid] == key) return true;
            //for duplicates
           if(nums[l] == nums[mid] && nums[h] == nums[mid]){
                l++;
                h--;
            }
            //checking in left half
            else if(nums[l] <= nums[mid]){
                if(key >= nums[l] && key <= nums[mid]){
                    h = mid -1;
                }
                else{
                    l = mid+1;
                }
            }
            //checking in right half
            else{
                if(key >= nums[mid] && key <= nums[h]){
                    l = mid+1;
                }
                else{
                    h = mid-1;
                }
            }
        }
        return false;
    }
};