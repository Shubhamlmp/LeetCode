class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n,0);
        int pInd = 0, nInd = 1;
        for(auto i : nums){
            if(i > 0){
                arr[pInd] = i;
                pInd +=2;
            }
           if(i < 0){
                arr[nInd] = i;
               nInd += 2;
            }
        }
        return arr;
    }
};