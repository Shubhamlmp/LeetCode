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
        vector<string>s1;
        for(auto x : m1){
            if(x.second == 1){
                s1.push_back(x.first);
            }
        }
       vector<string>s2;
        for(auto x : m2){
            if(x.second == 1){
                s2.push_back(x.first);
            }
        }
        for(auto x : s1){
            for(auto c : s2){
                if(x == c){
                    count++;
                }
            }
        }
        return count;
    }
};