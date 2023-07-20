class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x : nums){
            m[x]++;
        }
        int countPair = 0, left = 0;
        for(auto x : m){
            cout << x.second << " ";
            if(x.second >= 2){
                countPair += (x.second)/2;
                left += (x.second)%2;
            }
            else{
                left += x.second;
            }
        }
        return {countPair, left};
    }
};