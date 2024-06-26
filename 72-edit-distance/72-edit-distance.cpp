class Solution {
public:
    int minDistance(string s, string t) {
        int m = s.size();
        int n = t.size();
        int **ans = new int *[m+1];
        for(int i = 0; i <= m; i++){
            ans[i] = new int[n+1];
        }
        for(int i = 0; i <= m; i++){
            ans[i][0] = i;
        }
        for(int j = 0; j <= n; j++){
            ans[0][j] = j;
        }
        
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(s[m-i] == t[n-j]){
                    ans[i][j] = ans[i-1][j-1];
                }
                else{
                    ans[i][j] = min(ans[i][j-1], min(ans[i-1][j],ans[i-1][j-1])) + 1;
                }
            }
        }
        return ans[m][n];
    }
};