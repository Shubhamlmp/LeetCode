class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int n = s.size();
        if(n == 0){
            return true;
        }
        string temp;
        while(i < t.size() && j < s.size()){
            if(t[i] == s[j]){
                temp += s[j];
                i++;
                j++;
            }
            else{
                i++;
            }
            if(temp == s){
                return true;
            }
        }
        return false;
    }
};