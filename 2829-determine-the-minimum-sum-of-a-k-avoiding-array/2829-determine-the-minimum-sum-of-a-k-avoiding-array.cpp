class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_map<int,int>m;
        int ans = 0;
        int i = 0;
        while(n){
            i += 1;
            if(m.find(k-i) != m.end()){
                continue;
            }
            ans += i;
            m[i]++;
            n--;
        }
        return ans;
    }
};