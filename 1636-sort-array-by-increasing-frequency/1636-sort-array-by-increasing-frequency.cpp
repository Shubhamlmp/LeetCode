class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x: nums){
            m[x]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x : m){
            pq.push({-x.second,x.first});
        }
        vector<int>ans;
        while(!pq.empty()){
            int x = pq.top().first;
            x *= -1;
            while(x){
                ans.push_back(pq.top().second);
                x--;
            }
            pq.pop();
        }
        return ans;
    }
};