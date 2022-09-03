class Solution {
public:
    int lcsBetter(string t1, string t2){
        int m = t1.size();
        int n = t2.size();
        int **ans = new int *[m+1];
        for(int i = 0; i <= m; i++){
            ans[i] = new int[n+1];
        }
        //1st row
        for(int i = 0; i <= m; i++){
            ans[i][0] = 0;
        }
        //1st column
        for(int j = 0; j <= n; j++){
            ans[0][j] = 0;
        }
        for(int i = 1; i <= m; i++){
            for(int j= 1; j <= n; j++){
                if(t1[m-i] == t2[n-j]){
                    ans[i][j] = 1 + ans[i-1][j-1];
                }
                else{
                    ans[i][j] = max(ans[i-1][j],ans[i][j-1]);
                }
            }
        }
        return ans[m][n];
        
    }
    int longestCommonSubsequence(string t1, string t2) {
        return lcsBetter(t1, t2);
    }
};