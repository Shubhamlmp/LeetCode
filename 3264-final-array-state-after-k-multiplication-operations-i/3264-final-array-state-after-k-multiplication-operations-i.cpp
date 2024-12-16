class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;
        for(int i = 0; i < nums.size(); i++){
            minHeap.push({nums[i], i});
        }
        while(k--){
            pair<int,int> pr = minHeap.top();
            minHeap.pop();
            minHeap.push({(pr.first*multiplier), pr.second});
        }
        while(!minHeap.empty()){
            nums[minHeap.top().second] = minHeap.top().first;
            minHeap.pop();
        }
        return nums;
    }
};