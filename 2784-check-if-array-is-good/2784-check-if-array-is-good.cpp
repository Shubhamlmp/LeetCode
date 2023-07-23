class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size() == 1){
            return false;
        }
        bool ans = false;
        int maxx = *max_element(nums.begin(),nums.end());
        cout << maxx <<" ";
        vector<int>nums1;
        for(int i = 1; i <= maxx; i++){
            nums1.push_back(i);
        }
        sort(nums.begin(),nums.end());
        nums1.push_back(maxx);
        if(nums1 == nums){
            ans = true;
        }
        return ans;
    }
};