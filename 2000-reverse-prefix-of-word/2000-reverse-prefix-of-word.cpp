class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s = "";
        int j = -1;
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch){
                j = i;
                break;
            }
        }
        if(j == -1){
            return word;
        }
        s = word.substr(0, j+1);
        reverse(s.begin(),s.end());
        s += word.substr(j+1,word.size());
        return s;
    }
};