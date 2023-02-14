class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int j = nums.size()-1;
        int i = 0;
        while(i < j){
            string temp = to_string(nums[i++]) + to_string(nums[j--]);
            cout << temp << " ";
            ans += stoi(temp);
        }      
        if(i == j){
            string temp = to_string(nums[i++]);
            ans += stoi(temp);
        }
        return ans;

    }
};