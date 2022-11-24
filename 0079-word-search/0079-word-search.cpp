class Solution {
private:
    bool dfs(vector<vector<char>>& board, int i, int j, int count, string word) {
        if(count == word.size()) return true;
        
        if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[count]) return false;
        board[i][j] = '*';
        bool status = dfs(board, i, j+1, count+1, word) ||
                      dfs(board, i+1, j, count+1, word) ||
                      dfs(board, i, j-1, count+1, word) ||
                      dfs(board, i-1, j, count+1, word);
        board[i][j] = word[count];
        return status;
    }    
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(word == "") return false;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if((board[i][j] == word[0]) && (dfs(board, i, j, 0, word))){
                    return true;
                }
            }
        }
        return false;
    }

};