class Solution {
public:
    int countPrimes(int n) {
        if(n < 2) return 0;
        if(n == 2) return 0;
        vector<bool> seen(n, false);
        int ans = 1;
        for(int i = 3; i < n; i += 2){
            if(seen[i]) continue;
            ans++;
            for(long j = (long) i*i; j < n; j += i){
                seen[j] = true;
            }
        }
        return ans;
    }
};