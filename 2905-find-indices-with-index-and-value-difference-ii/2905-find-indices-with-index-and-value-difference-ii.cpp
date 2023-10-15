class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int idx, int val) {
        int n = nums.size();
        vector<pair<int,int>>res(n);
        res[n-1].first = nums[n-1];
        res[n-1].second = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            res[i].first = max(nums[i], res[i+1].first);
            res[i].second = min(nums[i], res[i+1].second);
        }
        vector<int>ans(2,-1);
        for(int i = 0; i < n; i++){
            int j = i + idx;
            if(j < n && (abs(nums[i]-res[j].first) >= val || abs(nums[i]-res[j].second) >= val)){
                ans[0] = i;
                for(int k = j; k < n; k++){
                    if(abs(nums[i]-nums[k]) >= val){
                        ans[1] = k;
                        break;
                    }
                }
                break;
            }
        }
        return ans;
    }
};