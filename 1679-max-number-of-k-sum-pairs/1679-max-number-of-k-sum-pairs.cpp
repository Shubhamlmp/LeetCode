class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i < j){
            if(nums[i] + nums[j] == k){
                nums[i] = -1;
                nums[j] = -1;
                count++;
                i++;
                j--;
            }
            else if(nums[i] + nums[j] > k){
                j--;
            }
            else{
                i++;
            }
        }
        return count;
    }
};