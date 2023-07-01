class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        long long sum = 0;
        for(auto x : gifts){
            pq.push(x);
            sum += x;
        }
        while(k--){
            int ans = pq.top();
            sum -= ans;
            pq.pop();
            sum += sqrt(ans);
            pq.push(sqrt(ans));
        }
        
        // while(!pq.empty()){
        //     sum += pq.top();
        //     pq.pop();
        // }
        return sum;
    }
};