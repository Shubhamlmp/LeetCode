class Solution {
public:
    vector<bool> isPrime(int n){
        vector<bool> primes(n+1, true);
        primes[1] = false;
        for(int i = 2; i <= n; i++){
            if(primes[i]){
                for(long j = (long) i*i; j <= n; j += i){
                    primes[j] = false;
                }
            }
        }
        return primes;
    }
    
    vector<int> closestPrimes(int left, int right) {
        vector<bool> primes = isPrime(right);
        vector<int>ans;
        for(int i = left; i <= right; i++){
            if(primes[i]){
                ans.push_back(i);
            }
        }
        if(ans.size() <= 1){
            return {-1,-1};
        }
        int minn = INT_MAX;
        int a, b;
        for(int i = 1; i < ans.size(); i++){
            if(abs(ans[i] - ans[i-1]) < minn){
                a = ans[i-1];
                b = ans[i];
                minn = abs(ans[i] - ans[i-1]);
            }
        }
        return {a,b};
    }
};