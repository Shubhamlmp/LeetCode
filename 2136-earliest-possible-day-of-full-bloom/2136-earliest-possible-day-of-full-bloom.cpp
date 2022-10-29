class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>v;
        
        for(int i = 0; i < plantTime.size(); i++){
            v.push_back({growTime[i],plantTime[i]});
        }
        
        sort(v.begin(),v.end());
        
        int ans = 0;
        for(auto x : v){
            ans = max(x.first,ans) + x.second;
        }
        return ans;
    }
};