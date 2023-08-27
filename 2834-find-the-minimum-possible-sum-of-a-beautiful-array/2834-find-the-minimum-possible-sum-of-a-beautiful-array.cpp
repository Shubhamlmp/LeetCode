class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long ans = 0;
        unordered_set<int>s;
        for(int i = 1; s.size() < n; i++){
            if(s.find(target-i) == s.end()){
                ans += i;
                s.insert(i);
            }
        }
        return ans;
    }
};