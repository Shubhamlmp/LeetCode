class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
        string word = "";
        for(char ch : s1){
            if(ch == ' '){
                m[word]++;
                word = "";
            }
            else{
                word += ch;
            }
        }
        m[word]++;
        word = "";
        
        for(char ch : s2){
            if(ch == ' '){
                m[word]++;
                word = "";
            }
            else{
                word += ch;
            }
        }
        m[word]++;
        
        vector<string>v;
        for(auto x : m){
            if(x.second == 1){
                v.push_back(x.first);
            }
        }
        return v;
    }
};