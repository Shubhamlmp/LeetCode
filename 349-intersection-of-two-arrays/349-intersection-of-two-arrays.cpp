class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<int> ans;
        int arr[1001] = {-1};
        
        for(int i = 0; i< n1; i++){
            arr[nums1[i]] = 1;
        }
        
        for(int i = 0; i< n2; i++){
            if(arr[nums2[i]] == 1){
                ans.push_back(nums2[i]);
                arr[nums2[i]] = -1;
            }
        }
        return ans;
    }
};