class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        vector<pair<int,int>>v;
        for(int i = 0; i < n; i++){
            v.push_back({boxTypes[i][1], boxTypes[i][0]});
        }
        sort(v.begin(),v.end(), greater<>());
        int ans = 0, i = 0;
        while(i < v.size()){
            int x = min(v[i].second, truckSize);
            ans += (x*v[i].first);
            truckSize -= x;
            if(!truckSize) break;
            i++;
        }
        return ans;
    }
};