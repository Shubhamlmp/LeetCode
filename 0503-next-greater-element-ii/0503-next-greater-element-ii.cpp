class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        nums.resize(2*n);
        for(int i = n; i < 2*n; i++){
            nums[i] = nums[i-n];
        }
        
        vector<int>ans;
        for(int i = 0; i < n; i++){
            int mx = -1;
            bool check = false;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] > nums[i]){
                    mx = nums[j];
                    check = true;
                    break;
                }
            }
            ans.push_back(mx);
        }
        return ans;
    }
};