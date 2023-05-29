class Solution {
public:
    string removeTrailingZeros(string num) {
        string s = num;
        while(s[s.size()-1] == '0'){
            s = s.substr(0, s.length() - 1);
        }
        return s;
    }
};