class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp(arr.begin(), arr.end());
        sort(temp.begin(),temp.end());
        unordered_map<int,int>mp;
        int i = 1;
        for(auto x : temp){
            if(mp[x] == 0) {
                mp[x] = i++;
            }
        }
        temp.clear();
        for(auto x : arr){
            temp.push_back(mp[x]);
        }
        return temp;
    }
};