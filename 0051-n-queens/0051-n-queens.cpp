class Solution {
public:
    vector<vector<string>> ans;
    bool isPossible(int n, int row, int col, vector<string>board){
        for(int i = row-1; i >= 0; i--){
            if(board[i][col] == 'Q'){
                return false;
            }
        }
        for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void nQueenHelper(vector<string>board, int n,int row){
        if(row == n){
            ans.push_back(board);
        return;
        }
            
        for(int j = 0; j < n; j++){
            if(isPossible(n, row, j, board)){
                board[row][j] = 'Q';
                nQueenHelper(board,n, row+1);
                board[row][j] = '.';
            }
        }
        return;
    };
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board (n, string(n, '.'));
        nQueenHelper(board,n,0);
        return ans;
    }
};