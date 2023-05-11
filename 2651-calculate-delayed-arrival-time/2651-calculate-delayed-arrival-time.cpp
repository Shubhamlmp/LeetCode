class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int totalTime = arrivalTime + delayedTime;
        int ans = -1;
        if(totalTime >= 24){
            ans = totalTime - 24;
        }
        if(totalTime < 24){
            ans = totalTime;
        }
        if(arrivalTime < delayedTime){
            if(totalTime > 24){
                ans = totalTime - 24;
            }
        }
        return ans;
    }
};