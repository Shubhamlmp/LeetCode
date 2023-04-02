class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int mx = INT_MIN;
        for(int i = 0; i < s.size();){
            int zeroCount = 0;
            int onesCount = 0;
            while(i < s.size() && s[i] == '0'){
                zeroCount++;
                i++;
            }
            while(i < s.size() && s[i] == '1'){
                onesCount++;
                i++;
            }
            int len = 2 * min(zeroCount, onesCount);
            mx = max(mx, len);
        }
        return mx;
    }
};