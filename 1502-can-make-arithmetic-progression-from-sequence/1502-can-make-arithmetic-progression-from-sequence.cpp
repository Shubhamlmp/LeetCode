class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<int>st;
        for(int i = 0; i < arr.size()-1; i++){
            st.insert(arr[i+1]-arr[i]);
        }
        if(st.size() > 1){
            return false;
        }
        return true;
    }
};