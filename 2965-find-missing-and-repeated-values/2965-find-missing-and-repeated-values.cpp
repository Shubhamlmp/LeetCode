class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int maxi = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                maxi = max(maxi, grid[i][j]);
                mp[grid[i][j]]++;
            }
        }
        vector<int>ans;
        // cout << (mp.find(4)  == mp.end());
        int missing = -1;
        cout << maxi;
        for(int i = 1; i <= maxi; i++){
            cout << i << " ";
            if(mp.find(i)  == mp.end()){
                missing = i;
            }
            if(mp[i] > 1){
                ans.push_back(i);
            }
        }
        if(missing != -1) {
            ans.push_back(missing);
        }
        else {
            ans.push_back(maxi+1);
        }
        return ans;
    }
};