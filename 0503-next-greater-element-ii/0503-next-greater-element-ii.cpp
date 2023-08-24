class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        int i;
        for(i = 0; i < nums.size(); i++){
            int mx = -1;
            bool check = false;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] > nums[i]){
                    mx = nums[j];
                    check = true;
                    break;
                }
            }
            if(mx == -1 && check == false){
                for(int j = 0; j < i; j++){
                    if(nums[j] > nums[i]){
                        mx = nums[j];
                        break;
                    }
                }
            }
            ans.push_back(mx);
        }
        return ans;
    }
};