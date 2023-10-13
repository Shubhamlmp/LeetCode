class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),false));
        for(int diff = 0; diff < s.size(); diff++){
            for(int i = 0, j = diff; j < s.size(); i++, j++){
                if(diff == 0){
                    dp[i][j] = true;
                }
                else if(diff == 1){
                    if(s[i] == s[j]){
                        dp[i][j] = true;
                    }
                    else{
                        dp[i][j] = false;
                    }
                }
                else{
                    if(s[i] == s[j]){
                        dp[i][j] = dp[i+1][j-1];
                    }
                }
                if(dp[i][j]) count++;
            }
            
        }
        return count;
    }
};