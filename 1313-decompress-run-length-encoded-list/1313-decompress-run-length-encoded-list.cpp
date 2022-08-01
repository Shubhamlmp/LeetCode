class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        int f;
        for(int i = 0; i< nums.size(); i += 2){
            int j = 0;
            while(j < nums[i]){
                v.push_back(nums[i+1]);
                j++;
            }
        }
        return v;
    }
};