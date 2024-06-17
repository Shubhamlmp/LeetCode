class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 1 || c == 0) return true;
        long long int i = 0;
        long long int j = sqrt(c);
        while(i <= j){
            long long mid = (i*i) + (j*j);
            if(mid == c) {
                return true;
            } else if (mid > c){
                j--;
            } else {
                i++;
            }
        }
        return false;
    }
};