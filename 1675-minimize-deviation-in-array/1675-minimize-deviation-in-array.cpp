class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;
        int minVal = INT_MAX;
        for(auto x : nums){
            if(x%2 == 1){
                x *= 2;
            }
            pq.push(x);
            minVal = min(minVal, x);
        }
        int minDev = INT_MAX;
        while(true){
            int maxVal = pq.top();
            pq.pop();
            minDev = min(minDev, (maxVal-minVal));
            if(maxVal%2 == 1){
                break;
            }
            maxVal /= 2;
            minVal = min(minVal, maxVal);
            pq.push(maxVal);
        }
        return minDev;
    }
};