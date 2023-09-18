class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        set<int>s1;
        for(int i = 0; i < n; i++){
            s1.insert(nums[i]);
            set<int>s2;
            for(int j = i+1; j < n; j++){
                s2.insert(nums[j]);
            }
            ans.push_back(s1.size()-s2.size());
            
        }
        return ans;
    }
};