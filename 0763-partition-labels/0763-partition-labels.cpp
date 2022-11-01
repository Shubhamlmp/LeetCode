class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>m;
        for(int i = 0; i < s.size(); i++){
            m[s[i]] = i;
        }
        vector<int>ans;
        int i = 0, visited = 0;
        while(i < s.size()){
            int maxi = m[s[i]];
            while(i <= maxi){
                maxi = max(maxi,m[s[i]]);
                i++;
            }
            ans.push_back(i-visited);
            visited = i;
        }
        return ans;
    }
};