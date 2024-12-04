class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0, j=0;
        while(i<str1.length() && j<str2.length()){
            if(str1[i]-'a'==str2[j]-'a' || (str1[i]-'a'+1)%26==str2[j]-'a'){
                j++;
            }
            if(j==str2.length()){
                return true;
            }
            i++;
        }

        return false;
    }
};