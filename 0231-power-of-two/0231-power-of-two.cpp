class Solution {
public:
    bool check(int n, long long int i){
        if(i > n){
            return false;
        }
        if(n == i){
            return true;
        }
        return check(n, i*2);
    }
    bool isPowerOfTwo(int n) {
        if(n == 1){
            return true;
        }
        return check(n, 2);
    }
};