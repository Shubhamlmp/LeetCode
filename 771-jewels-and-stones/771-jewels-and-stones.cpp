class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int ans = 0;
        for(auto i : s){
            if(j.find(i) != string::npos){
                ans++;
            }
        }
        return ans;
    }
};