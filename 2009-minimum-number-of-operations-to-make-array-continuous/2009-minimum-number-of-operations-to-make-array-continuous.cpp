class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        set<int>st(nums.begin(),nums.end());
        // for(auto x : nums){
        //     s.insert(x);
        // }
        vector<int>v(st.begin(),st.end());
        // above line works as same
        // for(auto x : s){
        //     v.push_back(x);
        // }
        // sort(v.begin(),v.end()); don't requered bcz set output is already sorted
        int vSize = v.size();
        int right = 0;
        int maxx = INT_MIN;
        for(int left = 0; left < n; left++){
            while(right < vSize && v[right]-v[left] <= n-1){
                right++;
            }
            int currCount = right-left;
            maxx = max(maxx, currCount);
        }
        return n-maxx;
    }
};