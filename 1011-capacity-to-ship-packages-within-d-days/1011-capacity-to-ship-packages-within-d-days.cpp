class Solution {
public:
    bool func(int mid, vector<int>& weights, int days){
        int sum = 0, d = 1;
        for(int i = 0; i < weights.size(); i++){
            if(sum+weights[i] <= mid) sum += weights[i];
            else{
                sum = weights[i];
                d++;
            }
        }
        if(d <= days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0, maxx = 0;
        for(int i = 0; i < weights.size(); i++){
            if(weights[i] > maxx) maxx = weights[i];
            sum += weights[i];
        }
        int low = maxx;
        int high = sum;
        int ans = 0;
        while(low <= high){
            int mid = (low+high)/2;
            if(func(mid, weights, days)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};