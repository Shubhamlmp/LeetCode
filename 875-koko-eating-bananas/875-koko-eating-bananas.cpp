class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end()), k = 0;
        while(low<=high){
            k = low + (high-low)/2;
            long long int H = 0;
            for(int i = 0; i < piles.size(); i++){
                H += ceil(1.0 * piles[i]/k);
            }
            if(H>h){
                low = k+1;
            }
            else{
                high = k-1;
            }
        }
        return low;
    }
};