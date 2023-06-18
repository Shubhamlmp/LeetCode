class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int totalTravel = 0;
        if(mainTank < 5){
            totalTravel = mainTank*10;
        }
        else{
            while(mainTank >= 5 && additionalTank > 0){
                totalTravel += 5;
                mainTank -= 5;
                mainTank += 1;
                additionalTank -= 1;
            }
            if(mainTank > 0){
                totalTravel += mainTank;
            }
            totalTravel *= 10;
        }
        return totalTravel;
    }
};