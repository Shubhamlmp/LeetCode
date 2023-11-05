class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++){
            bool ans = 0;
            for(int j = 0; j < grid.size(); j++){
                if(grid[j][i]) ans = 1; 
            }
            if(!ans) return i;
        }
        return -1;
    }
};