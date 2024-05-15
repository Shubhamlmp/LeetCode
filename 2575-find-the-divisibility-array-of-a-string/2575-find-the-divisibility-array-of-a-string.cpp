class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>ans;
        long long prevRem = 0;
        for(int i = 0; i < word.size(); i++){
            int currNum = word[i] - '0';
            long long newNum = (prevRem * 10) + currNum;
            int rem = newNum % m;
            ans.push_back((rem == 0)?1:0);
            prevRem = rem;
        }
        return ans;
    }
};