class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(),nums.end()), k = 0;
        while(low<=high){
            k = low + (high-low)/2;
            long long int H = 0;
            for(int i = 0; i < nums.size(); i++){
                H += ceil(1.0 * nums[i]/k);
            }
            if(H>threshold){
                low = k+1;
            }
            else{
                high = k-1;
            }
        }
        return low;
    }
};