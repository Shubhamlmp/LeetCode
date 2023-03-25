class Solution {
public:
    vector<int>newVector;
    vector<int> separateDigits(vector<int>& nums) {
        for(auto x : nums){
            seperate(x);
        }
        return newVector;
    }
    void seperate(int num){
        vector<int>temp;
        while(num){
            temp.push_back(num%10);
            num /= 10;
        }
        reverse(temp.begin(),temp.end());
        for(auto x : temp)
            newVector.push_back(x);
    }
};