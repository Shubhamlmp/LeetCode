class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0, x = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] < intervals[x][1]){
                count++;
                if(intervals[i][1] <= intervals[x][1]){
                    x = i;
                }
            }
            else{
                x = i;
            }
        }
        return count;
    }
};