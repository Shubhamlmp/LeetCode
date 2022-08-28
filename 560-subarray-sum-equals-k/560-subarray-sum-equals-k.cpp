class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        // if(n == 0) return 0;
        unordered_map<int, int> mp{{0,1}};
        int i = 0;
        int currSum = 0, count = 0;
        while(i < n){
            currSum += nums[i];
            count += mp[currSum-k];
            mp[currSum]++;
            i++;
        }
        return count;
    }
};