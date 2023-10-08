class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end());
        reverse(tasks.begin(),tasks.end());
        int tn = processorTime.size();
        int n = tasks.size();
        int parts = n/tn;
        int ans = INT_MIN;
        int count = 0;
        int j = 0;
        int sum = 0;
        for(int i = 0; i < tasks.size(); i++){
            if(count == parts){
                ans = max(ans,sum);
                cout << ans  << " " << sum << endl;
                count = 0, sum = 0, j = j+1;
            }
            sum = max(sum , (processorTime[j] + tasks[i]));
            // cout << sum << " "<< processorTime[j] << " "<< tasks[i] << " "<<  count << endl;
            
            count++;
        }
        ans = max(ans, sum);
        return ans;
    }
};