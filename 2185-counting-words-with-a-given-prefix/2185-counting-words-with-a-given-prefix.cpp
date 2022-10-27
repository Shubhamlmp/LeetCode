class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int prefLen = pref.size();
        
        for(auto x : words){
            if(x.substr(0,prefLen) == pref){
                count++;
            }
        }
        return count;
    }
};