class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i = 0; i < nums1.size(); i++){
            int element = -1, index;
            for(int j = 0 ; j < nums2.size(); j++){
                if(nums2[j] == nums1[i]){
                    index = j;
                    break;
                }
            }
            for(int j = index ; j < nums2.size(); j++){
                if(nums2[j] > nums1[i]){
                    element = nums2[j];
                    break;
                }
            }
            ans.push_back(element);
        }
        return ans;
    }
};