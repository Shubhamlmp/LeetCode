class Solution {
public:
    string sortSentence(string s) {
        vector<string>words (10, "");
        for(int i = 0; i < s.size(); i++){
            int j = i;
            string word = "";
            while(!isdigit(s[j])){
                word.push_back(s[j]);
                j++;
            }
            words[s[j]-'0'] = word;
            i = j+1;
        }
        string ans;
        for(int i = 1; i < words.size(); i++){
            if(words[i].length() > 0){
               ans += words[i];
                ans.push_back(' ');  
            }
        }
        ans.pop_back();
        return ans;
    }
};