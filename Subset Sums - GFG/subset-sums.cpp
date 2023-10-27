//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
private:
    void helper(int idx, int sum, vector<int> &subsetSum, vector<int> &arr){
        if(idx == arr.size()){
            subsetSum.push_back(sum);
            return;
        }
        helper(idx+1, sum+arr[idx], subsetSum, arr);
        helper(idx+1, sum, subsetSum, arr);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>subsetSum;
        helper(0,0, subsetSum, arr);
        sort(subsetSum.begin(),subsetSum.end());
        return subsetSum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends