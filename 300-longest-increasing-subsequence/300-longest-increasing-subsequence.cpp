class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> output(nums.size());
		output[0] = 1;
		int ans = 1;
		for (int i = 1; i < nums.size(); i++)
		{
			int max = 1;
			for (int j = i - 1; j >= 0; j--)
			{
				if (nums[j] < nums[i])
				{
					int possibleAns = output[j] + 1;
					if (possibleAns > max)
					{
						max = possibleAns;
					}
				}
			}
			output[i] = max;
			if (max > ans)
			{
				ans = max;
			}
		}
		return ans;
    }
};