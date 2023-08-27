class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long ans = 0;
        unordered_map<int,int>m;
        int i = 1;
        int j = 0;
        while(j != n){
            if(m.find(target-i) == m.end()){
                ans += i;
                m[i]++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};