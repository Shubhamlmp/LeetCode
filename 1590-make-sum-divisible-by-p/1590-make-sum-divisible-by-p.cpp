class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum = 0;
        for(auto x : nums){
            sum = (sum + x) % p;
        }
        int rem = sum%p;
        if(rem == 0){
            return 0;
        }
        
        unordered_map<int, int>mp;
        int curr = 0;
        mp[0] = -1;
        int n = nums.size();
        int ans = n;
        for(int i = 0; i < n; i++) {
            curr = (curr+nums[i])%p;
            int remain = (curr-rem+p)%p;
            if(mp.find(remain) != mp.end()){
                ans = min(ans, i - mp[remain]);
            }
            mp[curr] = i;
        }
        return ans == n ? -1 : ans;
    }
};