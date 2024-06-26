class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0;
        int row = nums.size();
        int col = nums[0].size();
        for(int i = 0; i < row; i++){
            sort(nums[i].begin(),nums[i].end());
        }
        for(int i = 0; i < col; i++){
            int maxx = 0;
            for(int j = 0; j < row; j++){
                if(maxx < nums[j][i]){
                    maxx = nums[j][i];
                }
            }
            ans += maxx;
        }
        return ans;
    }
};