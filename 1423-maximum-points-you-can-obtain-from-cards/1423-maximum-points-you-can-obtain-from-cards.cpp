class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int ans = INT_MIN;
        for(int i = 0; i<k; i++){
            sum += cardPoints[i];
        }
        ans = sum;
        for(int i = k-1; i >= 0; i--){
            sum -= cardPoints[i];
            sum += cardPoints[cardPoints.size() + i-k];
            ans = max(ans, sum);
        }
        return ans;
    }
};