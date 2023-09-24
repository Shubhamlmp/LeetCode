class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        long long ans = 0;
        for(int i = 0; i < maxHeights.size(); i++){
            int maxi = i;
            long long sum = 0;
            sum += maxHeights[maxi];
            int last = maxHeights[maxi];
            for(int i = maxi-1; i >= 0; i--){
                if(maxHeights[i] > last){
                    sum += last;
                }
                else{
                    last = maxHeights[i];
                    sum += last;
                }
            }
            last = maxHeights[maxi];
            for(int i = maxi+1; i <maxHeights.size(); i++){
                if(maxHeights[i] > last){
                    sum += last;
                }
                else{
                    last = maxHeights[i];
                    sum += last;
                }
            }
            ans = max(ans,sum);
        }
        return ans;
    }
};