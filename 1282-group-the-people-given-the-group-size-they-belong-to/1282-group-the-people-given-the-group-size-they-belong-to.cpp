class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        vector<vector<int>>m(groupSizes.size()+1);
        for(int i = 0; i < groupSizes.size(); i++){
            int L = groupSizes[i];
            m[L].push_back(i);
            if(L == m[L].size()){
                ans.push_back(m[L]);
                m[L] = {};
            }
        }
        return ans;
    }
};