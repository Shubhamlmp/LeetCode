class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>m;
        for(auto x: arr){
            m[x]++;
        }
        int mx = -1;
        for(auto x: m){
            if(x.first == x.second){
                mx = max(mx, x.first);
            }
        }
        return mx;
    }
};