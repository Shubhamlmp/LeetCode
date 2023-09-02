class Solution {
public:
    int helper(int index, string &s, unordered_map<string,bool>&m, vector<int>&dp){
        if(index >= s.size()){
            return 0;
        }
        if(dp[index] != -1) return dp[index];
        string curr = "";
        int res = s.size();
        for(int i = index; i < s.size(); i++){
            curr.push_back(s[i]);
            int extraCount = curr.size();
            if(m[curr]){
                extraCount = 0;
            }
            extraCount += helper(i+1, s,m,dp);
            res = min(res,extraCount);
        }
        return dp[index] = res;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        int count = s.size();
        unordered_map<string,bool>m;
        for(auto x : dictionary){
            m[x] = true;
        }
        vector<int>dp(s.size(),-1);
        return helper(0,s,m,dp);
    }
};