class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>freq;
        for(auto x : nums){
            freq.insert(x);
        }
        int dist = freq.size();
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            unordered_set<int>temp;
            for(int j = i ; j < nums.size(); j++){
                temp.insert(nums[j]);
                if(dist == temp.size()) ans++;
            }
        }
        return ans;
    }
};