class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end())) return 0;
        int minn = *min_element(nums.begin(),nums.end());
        int maxx = *max_element(nums.begin(),nums.end());
        auto it = find(nums.begin(), nums.end(), minn);
        int min_idx = it - nums.begin();
        auto it1 = find(nums.begin(), nums.end(), maxx);
        int maxx_idx = it1 - nums.begin();
        if(maxx_idx < min_idx && min_idx-maxx_idx == 1){
            bool left = true;
            bool right = true;
            for(int i = 1; i < min_idx; i++){
                if(nums[i-1] > nums[i]){
                    cout << nums[i-1] << " " << nums[i];
                    left = false;
                }
            }
            for(int i = min_idx+1; i < nums.size(); i++){
                if(nums[i-1] > nums[i]){
                    right = false;
                }
            }
            
            return (left && right) ? nums.size() - min_idx : -1;
        }
        return -1;
    }
};