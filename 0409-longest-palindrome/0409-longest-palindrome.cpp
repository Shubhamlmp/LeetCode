class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto x : s){
            mp[x]++;
        }
        int count = 0;
        for(auto x : mp){
            if(x.second%2 != 0){
                count++;
            }
        }
        if(count > 1){
            return s.length()-count+1;
        }
        return s.length();
    }
};