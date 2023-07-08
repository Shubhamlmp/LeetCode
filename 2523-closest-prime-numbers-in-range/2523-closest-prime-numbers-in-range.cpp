class Solution {
    vector<int>primes;
public:
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n == 2) return true;
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
            
    }
    vector<int> closestPrimes(int left, int right) {
        for(int i = left; i <= right; i++){
            if(isPrime(i)){
                primes.push_back(i);
            }
        }
        if(primes.size() <= 1){
            return {-1,-1};
        }
        int minn = INT_MAX;
        int a, b;
        for(int i = 1; i < primes.size(); i++){
            if(abs(primes[i] - primes[i-1]) < minn){
                a = primes[i-1];
                b = primes[i];
                minn = abs(primes[i] - primes[i-1]);
            }
        }
        return {a,b};
    }
};