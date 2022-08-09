const int MOD = 1e9+7;
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, long long> mp;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]] = 1;
            for(int j = 0; j < i; j++)
            {
                if(arr[i]%arr[j] == 0)
                {
                    mp[arr[i]] = (mp[arr[i]] + (mp[arr[j]] * mp[arr[i]/arr[j]]) % MOD) % MOD;
                }
            }
            ans = (ans + mp[arr[i]])% MOD;
        }
        return ans;
    }
};