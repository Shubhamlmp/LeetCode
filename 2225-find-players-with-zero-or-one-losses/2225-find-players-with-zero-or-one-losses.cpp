class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> mp;
        for(int i = 0; i < matches.size(); i++){
            mp[matches[i][1]]++;
        }
        vector<int>l;
        for(auto s: mp){
            if(s.second <= 1){
                l.push_back(s.first);
            }
        }
        sort(l.begin(),l.end());
        set<int>st;
        unordered_map<int,int>::iterator it;
        for(int i = 0; i < matches.size(); i++){
            it = mp.find(matches[i][0]);
            if(it == mp.end()){
                st.insert(matches[i][0]);
                
            }
        }
        return {{st.begin(),st.end()},{l.begin(),l.end()}};
    }
};