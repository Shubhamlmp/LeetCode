class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,vector<int>>> v;
        for(int i = 0; i < points.size(); i++){
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            v.push_back({dist, {points[i][0] , points[i][1]}});
        }
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        int j = 0;
        while(j < k){
            ans.push_back(v[j].second);
            j++;
        }
        return ans;
    }
};