class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = INT_MIN;
        int prod = 1, left = 1, right = 1;
        for(int i = 0; i < nums.size(); i++){
            left *= nums[i];
            right *= nums[nums.size()-1-i];
            maxProd = max(maxProd, max(left,right));
            if(left == 0) left = 1;
            if(right == 0) right = 1;
        }
        return maxProd;
    }
};