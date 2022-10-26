class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
        for(auto x : nums){
            s.insert(x);
        }
        vector<int>v;
        for(auto x : s){
            v.push_back(x);
        }
        sort(v.begin(),v.end());
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