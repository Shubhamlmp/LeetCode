class Solution {
public:
    static bool comp(const vector<int>& a, const vector<int>& b){
        return a[1] < b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        vector<int>dp(n,1);
        sort(pairs.begin(),pairs.end(), comp);
        int last = pairs[0][1];
        for(int i = 1; i < n; i++){
            if(pairs[i][0] > last){
                dp[i] = max(dp[i], dp[i-1]+1);
                last = pairs[i][1];
            }
            else{
                dp[i] = dp[i-1];
            }
        }
        return dp[n-1];
    }
};