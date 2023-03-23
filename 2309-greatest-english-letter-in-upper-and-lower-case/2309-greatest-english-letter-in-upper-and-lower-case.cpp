class Solution {
public:
    string greatestLetter(string s) {
        char ch;
        string ss = "";
        for(ch = 'Z'; ch >= 'A'; ch--){
            if(s.find(ch) != -1 && s.find(ch+32) != -1){
                ss.push_back(ch);
                return ss;
            }
        }
        return "";
    }
};