class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        priority_queue<int> q;
        
        int res = 0, removed = 0;
        
        for(auto a : arr) mp[a]++;
        for(auto c : mp) q.push(c.second);
        
        while(removed < arr.size()/2){
            removed += q.top();
            q.pop();
            res++;
        }
        return res;
    }
};