class Solution {
public:
    int minimumMoves(vector<vector<int>>& grid) {
        bool flag = false;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(grid[i][j] == 0){
                    flag = true;
                    break;
                }
            }
        }
        if(flag == false) return 0;
        int ans = INT_MAX;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(grid[i][j] == 0){
                    for(int ni = 0; ni < 3; ni++){
                        for(int nj = 0; nj < 3; nj++){
                            int d = abs(ni-i)+abs(nj-j);
                            if(grid[ni][nj] > 1){
                                grid[ni][nj]--;
                                grid[i][j]++;
                                ans = min(ans, d + minimumMoves(grid));
                                grid[ni][nj]++;
                                grid[i][j]--;
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};