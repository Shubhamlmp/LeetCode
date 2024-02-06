class Solution {
public:
    long long int mod = 1e9+7;
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;
        long long int first = power(5, even)%mod;
        long long int second = power(4, odd)%mod;
        return (first*second)%mod;
        
    }
    
    long long int power(long long int x, long long int n){
        if(n == 0) return 1;
        
        if(n%2 == 0){
            return power((x*x)%mod, n/2)%mod;
        }
        else{
            return x*power(x, n-1)%mod;
        }
    }
};