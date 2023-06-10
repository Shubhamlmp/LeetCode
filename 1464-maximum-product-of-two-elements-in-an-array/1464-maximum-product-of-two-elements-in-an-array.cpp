class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = *max_element(begin(nums),end(nums));
        int mn = -1;
        int mx_count = 0;
        vector<int>temp;
        for(auto x : nums){
            if(mx == x){
                mx_count++;
            }
            temp.push_back(x);
        }
        if(mx_count > 1){
            return (mx-1)*(mx-1);
        }
        sort(temp.begin(),temp.end(),greater<int>());
        mn = temp[1];
        cout << mx << mn;
        return (mx-1)*(mn-1);
    }
};