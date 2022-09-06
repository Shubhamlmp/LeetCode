class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        vector<int>ans;
        
        while(top <= bottom && left <= right){
            for(int col = left; col <= right; col++){
                ans.push_back(matrix[top][col]);
            }
            top++;
            for(int row = top; row <= bottom; row++){
                ans.push_back(matrix[row][right]);
            }
            right--;
            if(left > right || top > bottom) break;
           for(int col = right; col >= left; col--){
                ans.push_back(matrix[bottom][col]);
            }
            bottom--;
           for(int row = bottom; row >= top; row--){
                ans.push_back(matrix[row][left]);
            }
            left++;
        }
        return ans;
    }
};