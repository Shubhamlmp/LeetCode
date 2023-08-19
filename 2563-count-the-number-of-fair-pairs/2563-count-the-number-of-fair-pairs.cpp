class Solution {
public:
    long long countLess(vector<int>& nums, int val) {
        long long count = 0;
        for(int i = 0, j = nums.size()-1; i < j; i++){
            while(i < j && nums[i]+nums[j] > val){
                j--;
            }
            count += j-i;
        }
        return count;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        return countLess(nums, upper) - countLess(nums, lower-1);
    }
};