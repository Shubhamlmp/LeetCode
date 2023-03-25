class Solution {
public:
    vector<int>newVector;
    vector<int> separateDigits(vector<int>& nums) {
        for(auto x : nums){
            string s = to_string(x);
            for(auto n : s){
                newVector.push_back(n-'0');
            }
        }
        return newVector;
    }
};