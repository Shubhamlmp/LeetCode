class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        for(auto x : nums1){
            for(auto y : nums2){
                if(pq.size() < k){
                    pq.push({x+y, {x,y}});
                }
                else if(x+y < pq.top().first){
                    pq.push({x+y, {x,y}});
                    pq.pop();
                }
                else if(x+y > pq.top().first){
                    break;
                }
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};