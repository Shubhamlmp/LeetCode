class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s1 = s+s;
        if(s1.substr(1,s1.size()-2).find(s) != -1){
            return true;
        }
        return false;
    }
};