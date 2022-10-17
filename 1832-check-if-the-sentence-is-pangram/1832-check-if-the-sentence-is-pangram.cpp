class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp;
        for(auto x : sentence){
            mp[x]++;
        }
        int count = 0;
        for(auto x : mp){
            count++;
        }
        if(count >= 26){
            return true;
        }
        return false;
    }
};