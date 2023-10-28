class Solution {
public:
    vector<vector<string>> ans;
    bool isSafe(int col, int row, vector<string> &board, int n){
        int i = row, j = col;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        row = i, col = j;
        while(col >= 0){
            if(board[row][col] == 'Q') return false;
            col--;
        }
        
        row = i, col = j;
        while(row < n && col >= 0){
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void nQueenHelper(vector<string> &board, int n, int col) {
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(isSafe(col, row, board, n)){
                board[row][col] = 'Q';
                nQueenHelper(board, n, col+1);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        nQueenHelper(board, n, 0);
        return ans;
    }
};