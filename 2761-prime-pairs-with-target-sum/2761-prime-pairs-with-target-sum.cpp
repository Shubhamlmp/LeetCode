class Solution {
public:
    
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool>primes(n+1, true);
        for(int i = 2; i <= sqrt(n); i++){
            if(primes[i] == true){
                for(int j = i*i; j <= n; j += i){
                    primes[j] = false;
                }
            }
        }
        
        vector<vector<int>>ans;
        for(int i = 2; i <= n-1; i++){
            int j = n-i;
            if(primes[i] && primes[j] && i <= j){
                ans.push_back({i,n-i});
            }
        }
        return ans;
    }
};