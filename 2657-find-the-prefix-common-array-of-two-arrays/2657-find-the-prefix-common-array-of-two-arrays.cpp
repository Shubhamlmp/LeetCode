class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_map<int,int>mp;
        vector<int>ans(n, 0);
        for(int i = 0; i < n; i++){
            mp[A[i]]++;
            int count = 0;
            for(int j = 0; j <= i; j++){
                if(mp.count(B[j]) > 0){
                    count++;
                }
            }
            ans[i] = count;
        }
        return ans;
    }
};