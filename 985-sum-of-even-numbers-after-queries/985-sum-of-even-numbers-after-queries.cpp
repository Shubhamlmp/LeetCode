class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        for(auto x: nums){
            if(x%2 == 0){
                sum += x;
            }
        }
        vector<int>ans;
        
        for(int i = 0; i < queries.size(); i++){
            int val = queries[i][0];
            int idx = queries[i][1];
                if((nums[idx]+val)%2 == 0){
                    if(nums[idx]%2 == 0){
                        sum += val;
                    }
                    else{
                        sum += nums[idx]+val;
                    }
                }
            else if((nums[idx]+val)%2 != 0){
                if(nums[idx]%2 == 0){
                    sum -= nums[idx];
                }
            }
            nums[idx] += val;
            ans.push_back(sum);
        }
        return ans;
    }
};