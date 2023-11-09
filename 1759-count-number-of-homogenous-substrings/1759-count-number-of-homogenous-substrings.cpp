class Solution {
public:
    int countHomogenous(string s) {
        int j = 0;
        long long ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[j] == s[i]){
                ans += i-j+1;
            }
            else{
                ans += 1;
                j = i;
            }
        }
        return (int) (ans%(1000000007));
    }
};