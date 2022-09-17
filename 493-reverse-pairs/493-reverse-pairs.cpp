class Solution {
public:
    int cnt;
    void merge(vector<int>& nums, int low, int mid, int high){
        int i = low, j = mid+1;
        vector<int>temp;
        while(i <= mid && j <= high){
            if((long)nums[i] > (long) 2*nums[j]){
                cnt += mid+1-i;
                j++;
            }
            else{
                i++;
            }
        }
        i=low;
        j=mid+1;
        int k=0;
        while(i<=mid and j<=high)
        {
            if(nums[i]<nums[j])
            {
                temp.push_back(nums[i++]);
            }
            else
            {
                temp.push_back(nums[j++]);
            }
            k++;
        }
        while(i<=mid)
            temp.push_back(nums[i++]);
            k++;
        while(j<=high)
            temp.push_back(nums[j++]);
            k++;
        for(i=low;i<=high;i++)
            nums[i]=temp[i-low];
        // sort(nums.begin()+low,nums.begin()+high+1);
    }
    void mergeSort(vector<int>& nums, int low, int high){
        if(low >= high){
            return;
        }
        int mid = (low+high)/2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);
    }
    int reversePairs(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        cnt = 0;
        mergeSort(nums, 0, nums.size()-1);
        return cnt;
    }
};