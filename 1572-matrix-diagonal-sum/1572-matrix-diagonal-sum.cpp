class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int mid = n/2;
        for(int i = 0; i < n; i++){
            sum += mat[i][i];
            sum += mat[n-i-1][i];
        }
        
        if(n%2 == 1){
            sum -= mat[mid][mid];
        }
        return sum;
    }
};