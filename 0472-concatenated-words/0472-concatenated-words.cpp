class Solution {
private:
    bool isConcatePossible(string &word, vector<string>& words,unordered_map<string, int>&m){
        int n = word.size();
        for(int i = 1; i < n; ++i){
            string prefix = word.substr(0,i);
            string suffix = word.substr(i);
            if(m[prefix] && (m[suffix] || isConcatePossible(suffix, words, m))){
                return true;
            }
        }
        return false;
    }
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> ans;
        unordered_map<string, int> m;
        for(auto x : words){
            m[x]++;
        }
        
        for(auto &word : words){
            if(isConcatePossible(word, words, m)){
                ans.push_back(word);
            }
        }
        return ans;
    }
};