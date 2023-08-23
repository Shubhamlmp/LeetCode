class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char,int>m;
        for(auto ch : s){
            m[ch]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto x : m){
            pq.push({x.second,x.first});
        }
        pair<int,char> g = {-1, '$'};
        string ans = "";
        while(!pq.empty()){
            auto temp = pq.top();
            pq.pop();
            ans += temp.second;
            temp.first--;
            if(g.first > 0){
                pq.push(g);
            }
            g = temp;
        }
        if(n != ans.size()) return "";
        return ans;
    }
};