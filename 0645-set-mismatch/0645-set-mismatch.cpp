class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int j;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                j = nums[i];
            }
        }
        int total = (nums.size() * (nums.size()+1))/2;
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        
        vector<int>v;
        total -= j;
        for(auto x : mp){
            if(x.second <= 1){
                total -= x.first;
            }
        }
        v.push_back(j);
        v.push_back(total);
        return v;
    }
};