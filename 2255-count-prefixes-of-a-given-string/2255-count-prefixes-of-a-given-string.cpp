class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        
        for(auto x : words){
            int sz = x.size();
            if(s.substr(0,sz) == x){
                count++;
            }
        }
        return count;
    }
};