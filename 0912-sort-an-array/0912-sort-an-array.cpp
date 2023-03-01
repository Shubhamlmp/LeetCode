class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto x : nums){
            pq.push(x);
        }
        nums.clear();
        while(!pq.empty()){
            nums.push_back(pq.top());
            pq.pop();
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};