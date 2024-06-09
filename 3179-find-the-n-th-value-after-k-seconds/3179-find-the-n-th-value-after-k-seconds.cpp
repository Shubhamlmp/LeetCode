class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int>prefSum(n,1);
        int mod=1e9+7;
        for(int i = 0; i < k; i++){
            for(int j = 1; j < n; j++){
                prefSum[j] = prefSum[j-1]%mod + prefSum[j]%mod;
            }
        }
        return prefSum[n-1]%mod;
    }
};