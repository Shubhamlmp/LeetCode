class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        
        int total = (nums.size() * (nums.size()+1))/2;
        
        nums.clear();
        for(auto x : mp){
            if(x.second <= 1){
                total -= x.first;
            }
            else if(x.second == 2){
                nums.push_back(x.first);
                total -= x.first;
            }
        }
                
        nums.push_back(total);
        return nums;
    }
};