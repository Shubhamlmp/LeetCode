class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for(auto ch : s){
            c ^= ch;
        }
        for(auto ch : t){
            c ^= ch;
        }
        return c;
    }
};