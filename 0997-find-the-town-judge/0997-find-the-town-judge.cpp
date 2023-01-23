class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.size() == 0 && n == 1) 
            return 1;
        vector<pair<int,int>> arr(n+1, {0,0});
        for(int i = 0; i < trust.size(); i++){
            arr[trust[i][0]].first += 1;
            arr[trust[i][1]].second += 1;   
        }
        for(int i = 0; i <= n; ++i){
            if(arr[i].first == 0 && arr[i].second == n-1){
                return i;
            }
        }
        return -1;
    }
};