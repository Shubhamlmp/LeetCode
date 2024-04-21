class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> mp;
        int count = 0;
        set<char>s1;
        for(auto x : word) {
            s1.insert(x);
        }
        for(auto x : s1) {
            if(x > 'Z' && mp[x] < 1)
                mp[std::tolower(x)]++;
        }
        for(auto x : s1) {
            if(x < 'a' && mp[x] < 2)
                mp[std::tolower(x)]++;
        }
        for(auto x : mp) {
            if(x.second == 2) count++;
        }
        return count;
    }
};