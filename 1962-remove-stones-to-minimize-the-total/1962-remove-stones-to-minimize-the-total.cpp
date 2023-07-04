class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto x : piles){
            pq.push(x);
        }
        while(k--){
            int top = 0;
            if(pq.top()%2 != 0){
                top = pq.top()/2 + 1;
            }
            else{
                top = pq.top()/2;
            }
            pq.pop();
            pq.push(top);
        }
        int ans = 0;
        while(!pq.empty()){
            cout << pq.top() << " ";
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};