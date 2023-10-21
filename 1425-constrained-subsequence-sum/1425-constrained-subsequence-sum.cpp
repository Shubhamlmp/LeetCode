class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>>pq;
        pq.push({nums[0],0});
        int ans = nums[0];
        for(int i = 1; i < n; i++){
            while(i-pq.top().second > k){
                pq.pop();
            }
            int curr = max(0, pq.top().first)+nums[i];
            pq.push({curr,i});
            ans = max(ans, curr);
        }
        return ans;
    }
};