class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto x : nums2){
            nums1.push_back(x);
        }
        sort(nums1.begin(),nums1.end());
        float ans;
        int n = (nums1.size()-1)/2;
        if(nums1.size()%2 == 1){
            ans = nums1[n];
        }
        else{
            cout << nums1[n] << " " << nums1[n+1];
            ans = (nums1[n] + nums1[n+1])/2.0; 
        }
        return ans;
    }
};