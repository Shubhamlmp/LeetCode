class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        
        for(auto x : words){
            if(s.substr(0,x.size()) == x){
                count++;
            }
        }
        return count;
    }
};