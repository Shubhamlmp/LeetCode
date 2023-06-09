class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > mn && nums[i] < mx){
                count++;
            }
        }
        return count;
    }
};