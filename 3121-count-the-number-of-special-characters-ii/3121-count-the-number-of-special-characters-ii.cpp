class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> hist(26, -1);
        int cnt = 0;
        for(int i = 0; i < word.size(); i++) {
            if(islower(word[i])){
                hist[word[i]-'a'] = i;
            }
        }
        for(int i = 0; i < word.size(); i++) {
            if(isupper(word[i]) and hist[word[i]-'A'] != -1){
                if (hist[word[i]-'A'] < i) cnt++;
                hist[word[i]-'A'] = -1;
            }
        }
        return cnt;
    }
};