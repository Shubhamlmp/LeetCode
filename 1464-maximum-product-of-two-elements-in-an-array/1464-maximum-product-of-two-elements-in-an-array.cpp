class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int mx = *max_element(begin(nums),end(nums));
        int mn = nums[1];
        cout << mx << mn;
        return (mx-1)*(mn-1);
    }
};