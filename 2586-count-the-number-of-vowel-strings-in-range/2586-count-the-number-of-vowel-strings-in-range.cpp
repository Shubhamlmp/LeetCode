class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        string str = "aeiou";
        for(int i = left; i <= right; i++){
            string s = words[i];
            if (str.find(s[0]) != std::string::npos && str.find(s[s.size()-1]) != std::string::npos) {
                count++;
            }
        }
        return count;
    }
};