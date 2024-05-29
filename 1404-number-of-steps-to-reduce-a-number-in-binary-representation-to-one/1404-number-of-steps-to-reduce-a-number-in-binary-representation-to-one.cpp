class Solution {
public:
    int numSteps(string s) {
        int ans = 0;
        int n = s.size();
        int carry = 0;
        for(int i = n-1; i >= 1; i--){
            if(((s[i] - '0') + carry)%2 == 1){
                ans += 2;
                carry = 1;
            } else{
                ans++;
            }
        }
        return ans + carry;
    }
};