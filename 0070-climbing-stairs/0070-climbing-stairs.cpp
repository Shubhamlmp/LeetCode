class Solution {
public:
    int climbStairs(int n) {
        long *ways = new long[n+1];
        if(n == 0) return 1;
        if(n == 1 || n == 2) return n;
        ways[0] = 1;
        ways[1] = 1;
        for(int i = 2; i <= n; i++){
            ways[i] = ways[i-1]+ways[i-2];
        }
        return ways[n];
     }
};