class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        vector<string>words1, words2;
        findWords(s1, words1);
        findWords(s2, words2);
        
        if(words1.size() > words2.size()){
            swap(words1,words2);
        }
        
        int i = 0;
        while(i < words1.size() && words1[i] == words2[i]){
            i++;
        }
        int j = words1.size()-1;
        int w2Pos = words2.size()-1;
        while(j >= 0 && words1[j] == words2[w2Pos]){
            j--;
            w2Pos--;
        }
        cout << i << " " << j;
        return i > j;
        
    }
    
    void findWords(string s, vector<string> &words) {
        string temp = "";
        for(auto x : s){
            if(x == ' '){
                words.push_back(temp);
                temp = "";
            } else{
                temp += x;
            }
        }
        words.push_back(temp);
    }
};