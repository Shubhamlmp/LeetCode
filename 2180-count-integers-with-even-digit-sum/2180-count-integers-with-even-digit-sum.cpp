class Solution {
public:
    bool isEven(int num){
        int sum = 0;
        while(num > 0){
            sum += num%10;
            num /= 10;
        }
        if(sum%2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    int countEven(int num) {
        int count  = 0;
        while(num > 0){
            if(isEven(num)){
                count++;
            }
            num--;
        }
        return count;
    }
};