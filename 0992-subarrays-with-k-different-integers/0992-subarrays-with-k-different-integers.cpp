class Solution {
public:
    int subArray(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>m;
        int count = 0, i = 0, j = 0;
        while(i < n){
            m[nums[i]]++;
            while(m.size() > k){
                m[nums[j]]--;
                if(m[nums[j]] == 0){
                    m.erase(nums[j]);
                }
                j++;
            }
            count += i - j + 1;
            i++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subArray(nums, k) - subArray(nums, k-1);
    }
};