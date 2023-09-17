class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x : nums){
            m[x]++;
        }
        priority_queue<int>pq;
        for(auto x : m){
            pq.push(x.second);
        }
        while(pq.size()>=2){
            int t1 = pq.top();
            pq.pop();
            int t2 = pq.top();
            pq.pop();
            t1--;
            t2--;
            if(t1) pq.push(t1);
            if(t2) pq.push(t2);
        }
        
        return pq.size()?pq.top():0;
    }
};