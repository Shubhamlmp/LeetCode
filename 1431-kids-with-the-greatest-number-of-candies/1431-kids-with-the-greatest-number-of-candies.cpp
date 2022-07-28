class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int a = *max_element(candies.begin(), candies.end());
        for(auto i : candies){
            ans.push_back(extraCandies+i >= a);
        }
        return ans;
    }
};