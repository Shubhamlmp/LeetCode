class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long, long long>mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mp[nums[i]-i]++;
        }
        long long ans = (long long)n * (long long)(n-1)/2;
        for(auto x : mp){
            ans = ans - (x.second*(x.second-1)/2);
        }
        return ans;
    }
};