class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto x : words){
            mp[x]++;
        }
        priority_queue<pair<int,string>>pq;
        for(auto x : mp){
            pq.push({-x.second,x.first});
            if(pq.size() > k) pq.pop();
        }
        vector<string>res;
        
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};