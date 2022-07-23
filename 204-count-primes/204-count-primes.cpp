class Solution {
public:
    int countPrimes(int n) {
        vector<bool> seen(n, false);
        int ans = 0;
        for(int i = 2; i < n; i++){
            if(seen[i]) continue;
            ans++;
            for(long j = (long) i*i; j < n; j += i){
                seen[j] = true;
            }
        }
        return ans;
        // for (int num = 2; num < n; num++) {
        //     if (seen[num]) continue;
        //     ans++;
        //     for (long mult = (long)num * num; mult < n; mult += num)
        //         seen[mult] = true;
        // }
        // return ans;

    }
};