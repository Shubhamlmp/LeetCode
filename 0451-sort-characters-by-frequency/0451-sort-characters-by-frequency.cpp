class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto x : s){
            mp[x]++;
        }
        priority_queue<pair<int, char>>pq;
        for(auto x : mp){
            pq.push({x.second,x.first});
        }
        
        string ans = "";
        while(!pq.empty()){
            ans += string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return ans;
    }
};