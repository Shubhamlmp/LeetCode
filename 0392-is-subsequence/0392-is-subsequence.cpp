class Solution {
public:
    bool isSubsequence(string s, string t) {
        string tmp = "";
        int i = 0, j = 0;
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j]){
                tmp+= s[i];
                i++; j++;
            }
            else if(s[i] != t[j]){
                j++;
            }
            if(tmp == s){
                return true;
            }
        }
        return tmp == s;
    }
};