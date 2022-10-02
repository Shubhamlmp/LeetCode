class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        int x;
        for(int i = 0; i < encoded.size(); i++){
            x = ans[i]^encoded[i];
            ans.push_back(x);
        }
        return ans;
    }
};