class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>ans;
        
        for(int i = 0; i < k; i++){
            ans.push_back(nums[i]);
        }
        for(int i = k; i < nums.size(); i++){
            //fetch position of min element
            auto minn = min_element(ans.begin(),ans.end());
            if(nums[i] > *minn){
                ans.erase(minn);
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};