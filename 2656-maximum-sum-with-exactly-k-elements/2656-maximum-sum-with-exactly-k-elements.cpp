class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        vector<int>v;
        v.push_back(nums[nums.size()-1]);
        for(int i = 1; i < k; i++){
            // cout << nums[nums.size()-1] << " " << (nums[nums.size()-1] + i) << endl;
            v.push_back(nums[nums.size()-1] + i);
        }
        int sum = 0;
        for(auto x : v){
            sum += x;
        }
        return sum;
    }
};