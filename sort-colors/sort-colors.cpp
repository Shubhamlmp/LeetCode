class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        for(auto x : nums){
            if(x == 0) zero++;
            if(x == 1) one++;
            if(x == 2) two++;
        }
        int j = 0;
        for(int i = 0; i < zero; i++){
            nums[j] = 0;
            j++;
        }
        cout << j << endl;
        for(int i = 0; i < one; i++){
            nums[j] = 1;
            j++;
        }
        cout << j << endl;
        for(int i = 0; i < two; i++){
            nums[j] = 2;
            j++;
        }
    }
};