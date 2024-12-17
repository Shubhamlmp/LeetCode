class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<pair<char, int>> pq;
        unordered_map<char, int>mp;
        for(auto x : s){
            mp[x]++;
        }
        for(auto x : mp){
            pq.push({x.first, x.second});
        }
        string res = "";
        while(!pq.empty()){
            auto top = pq.top(); pq.pop();
            int lim = min(top.second, repeatLimit);
            top.second -= lim;
            
            while(lim--) res.push_back(top.first);
            if(top.second > 0){
                if(pq.empty()) return res;
                auto next = pq.top(); pq.pop();
                res.push_back(next.first);
                next.second -= 1;
                if(next.second) pq.push(next);
                pq.push(top);
            }
        }
        return res;
    }
};