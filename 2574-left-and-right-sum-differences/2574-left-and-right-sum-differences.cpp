class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        for(int i = 1; i < nums.size(); i++){
            left[i] = nums[i-1]+left[i-1];
        }
        for(int i = n-1; i > 0; i--){
            right[i-1] = nums[i] + right[i];
        }
        // nums.clear();
        for(int i = 0; i < left.size(); i++){
            nums[i] = abs(left[i] - right[i]); 
        }
        return nums;
    }
};

// n = 4;

// 10,4,8,3
// 0  1 2 3