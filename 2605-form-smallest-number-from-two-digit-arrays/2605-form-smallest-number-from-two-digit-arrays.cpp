class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        map<int,int>m;
        for(auto x : nums1){
            m[x]++;
        }
        for(auto x : nums2){
            m[x]++;
        }
        for(auto x : m){
            if(x.second >=2){
                return x.first;
            }
        }
        int ans = INT_MIN;
        int min1 = nums1[0];
        int min2 = nums2[0];
        if(min1 < min2){
            ans = (min1*10)+min2;
        }
        else{
            ans = (min2*10)+min1;
        }
        return ans;
    }
};