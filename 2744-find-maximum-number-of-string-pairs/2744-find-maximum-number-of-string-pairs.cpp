class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int>m;
        for(auto x : words){
            string s = x;
            sort(s.begin(),s.end());
            m[s]++;
        }
        int count = 0;
        for(auto x : m){
            if(x.second > 1){
                count++;
            }
        }
        return count;
    }
};