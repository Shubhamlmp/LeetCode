class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>m;
        for(int i = 0; i < n; i++){
            m[nums[i]-k]++;
            m[nums[i]+k+1]--;
        }
        int ans = 0;
        int prev = 0;
        for(auto [x,y] : m){
            prev += y;
            ans = max(ans, prev);
        }
        return ans;
    }
};