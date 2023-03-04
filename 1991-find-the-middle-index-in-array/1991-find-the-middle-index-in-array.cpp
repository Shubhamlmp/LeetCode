class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>v1(n,0);
        vector<int>v2(n,0);
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            v1[i] += sum;
        }
        sum = 0;
        for(int i = n-1; i >= 0; i--){
            sum += nums[i];
            v2[i] += sum;
        }
        int ans = -1;
        for(int i = 0; i < v1.size(); i++){
            if(v1[i] == v2[i]){
                ans = i;
                break;
            }
        }
        return ans;
    }
};