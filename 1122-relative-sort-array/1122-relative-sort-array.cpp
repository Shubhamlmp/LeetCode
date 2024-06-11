class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        set<int>st(arr1.begin(),arr1.end());
        for(auto x : arr1){
            mp[x]++;
        }
        sort(arr1.begin(), arr1.end());
        int j = 0;
        for(int i = 0; i < arr2.size(); i++){
            int cnt = mp[arr2[i]];
            while(cnt > 0){
                arr1[j] = arr2[i];
                j++;
                cnt--;
            }
            mp.erase(arr2[i]);
        }
        for(auto x : st){
            int cnt = mp[x];
            while(cnt > 0){
                arr1[j] = x;
                j++;
                cnt--;
            }
            mp.erase(x);
        }
        
        return arr1;
    }
};