class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        threshold *= k;
        int Sum = accumulate(arr.begin(),arr.begin()+k,0);
        int count = (Sum >= threshold);
        for(int i = k; i < arr.size(); i++){
            Sum += arr[i] - arr[i-k];
            count += (Sum >= threshold);
        }
        return count;
    }
};