class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int>m1;
        unordered_map<string, int>m2;
        for(auto x : words1){
            m1[x]++;
        }
        for(auto x : words2){
            m2[x]++;
        }
        int count = 0;
        for(auto x : m1){
            if(x.second == 1 && m2[x.first] == 1){
                count++;
            }
        }
        return count;
    }
};