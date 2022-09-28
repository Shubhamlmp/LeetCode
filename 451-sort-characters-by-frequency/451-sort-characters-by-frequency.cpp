class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        string res;
	    unordered_map<char,int>m;
	    for(int i = 0; i < n; i++){
		    m[s[i]]++;
	    }
        vector<pair<int,char>>ans;
        for(auto i : m){
            ans.push_back({i.second,i.first});
        }
        sort(ans.begin(),ans.end(),greater<pair<int,char>>());
        for(auto i : ans){
            res += string(i.first,i.second);
        }
        return res;
    }
};