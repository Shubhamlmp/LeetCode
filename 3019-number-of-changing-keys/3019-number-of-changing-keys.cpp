class Solution {
public:
    int countKeyChanges(string s) {
        for(auto& c : s)
        {
            c = tolower(c);
        }
        int count = 0;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] != s[i+1]) count++;
        }
        return count;
    }
};