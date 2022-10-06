class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int i = 0;
        int j = 0;
        int totalTime = 0;
        while(i < n && j < n){
            int maxTime = 0, currTotal = 0;
            while(j < n && colors[i] == colors[j]){
                maxTime = max(maxTime, neededTime[j]);
                currTotal += neededTime[j];
                j++;
            }
            i = j;
            totalTime += currTotal - maxTime;
        }
        return totalTime;
    }
};