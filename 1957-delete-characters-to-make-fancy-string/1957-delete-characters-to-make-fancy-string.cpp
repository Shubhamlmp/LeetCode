class Solution {
public:
    string makeFancyString(string s) {
        string s1 = "";
        int count = 1;
        for(int i = 0; i < s.size(); ++i){
            if(count <= 2) s1 += s[i];
            if(s[i] == s[i+1]) count++;
            else count = 1;
            
        }
        return s1;
    }
};