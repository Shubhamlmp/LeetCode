class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(begin(piles), end(piles));

        while(k--){
            int top = pq.top() - pq.top()/2;
            pq.pop();
            pq.push(top);
        }
        int ans = 0;
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};