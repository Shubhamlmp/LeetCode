class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int>mset;
        for(auto x : nums){
            mset.insert(x);
            if(mset.size()>k){
                mset.erase(mset.begin());
            }
        }
        return *mset.begin();
    }
};