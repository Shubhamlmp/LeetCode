//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void helper(int i, int j, vector<vector<int>> &m, int n, vector<string> &ans, vector<vector<int>> &check, string s){
        if(i == n-1 && j == n-1){
            ans.push_back(s);
            return;
        }
        if(i+1 < n && !check[i+1][j] && m[i+1][j] != 0){
            check[i][j] = 1;
            helper(i+1, j, m, n, ans, check, s + 'D');
            check[i][j] = 0;
        }
        if(j-1 >= 0 && !check[i][j-1] && m[i][j-1] != 0){
            check[i][j] = 1;
            helper(i, j-1, m, n, ans, check, s + 'L');
            check[i][j] = 0;
        }
        if(j+1 < n && !check[i][j+1] && m[i][j+1] != 0){
            check[i][j] = 1;
            helper(i, j+1, m, n, ans, check, s + 'R');
            check[i][j] = 0;
        }
        if(i-1 >= 0 && !check[i-1][j] && m[i-1][j] != 0){
            check[i][j] = 1;
            helper(i-1, j, m, n, ans, check, s + 'U');
            check[i][j] = 0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<int>> check(n, vector<int>(n, 0));
        if(m[0][0] == 1) helper(0,0, m, n, ans, check, "");
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends