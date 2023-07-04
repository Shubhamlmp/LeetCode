class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum = 0;
        priority_queue<int>pq(nums.begin(),nums.end());
        while(k--){
            int top = pq.top();
            sum += top;
            pq.pop();
            pq.push(ceil((double)top/3));
        }
        return sum;
    }
};