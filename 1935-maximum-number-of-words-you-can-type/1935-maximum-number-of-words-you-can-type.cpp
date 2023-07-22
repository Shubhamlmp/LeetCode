class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int>m;
        for(auto x : brokenLetters){
            m[x]++;
        }
        int count = 0;
        stringstream s(text);
        string word;
        while(s >> word){
            bool flag = false;
            for(int i = 0; i < word.size(); i++){
                if(m.count(word[i]) > 0){
                    flag = true;
                    break;
                }
            }
            if(!flag) count++;
        }
        return count;
    }
};