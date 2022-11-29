class Solution {
    vector<vector<int>> result;
public:
     void combined(int idx, vector<int> &current, int n, int k) {
        if(current.size() == k){
            result.push_back(current);
            return;
        }
         for(int i = idx; i < n+1; i++){
             current.push_back(i);
             combined(i+1, current, n, k);
             current.pop_back();
         }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        combined(1, current, n, k);
        return result;
    }
};