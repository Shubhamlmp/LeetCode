class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        int  i = 0;
        int j = 0;
        multiset<int>st;
        long long ans = 0;
        while(i < n){
            while(j < n && (st.empty() || max(nums[j], *(--st.end())) - min(nums[j], *(st.begin())) <= 2)){
                st.insert(nums[j]);
                j++;
            }
            ans += st.size();
            st.erase(st.find(nums[i]));
            i++;
        }
        return ans;
    }
};