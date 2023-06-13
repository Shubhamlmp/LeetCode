class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        string st = "";
        for(int i = 0; i < nums.size(); i++){
            int j = i;
            while(j+1 < n && nums[j+1] == nums[j]+1){
                j++;
            }
            if(j > i){
                st += to_string(nums[i]);
                st += "->";
                st += to_string(nums[j]);
                
            }
            else{
                st += to_string(nums[i]);
            }
            ans.push_back(st);
            st = "";
            i = j;
        }
        return ans;
    }
};