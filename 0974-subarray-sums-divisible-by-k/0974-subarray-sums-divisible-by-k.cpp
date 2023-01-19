class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int>mp;
        mp[0] = 1;
        int runningSum = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            runningSum += nums[i];
            int rem = runningSum%k;
            if(rem < 0){
                rem += k;
            }
            count += mp[rem];
            mp[rem]++;
        }
        return count;
    }
};