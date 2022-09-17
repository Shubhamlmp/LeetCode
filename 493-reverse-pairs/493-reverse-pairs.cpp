class Solution {
public:
    int cnt;
    void merge(vector<int>& nums, int low, int mid, int high){
        int i = low, j = mid+1;
        while(i <= mid && j <= high){
            if((long)nums[i] > (long) 2*nums[j]){
                cnt += mid+1-i;
                j++;
            }
            else{
                i++;
            }
        }
        sort(nums.begin()+low,nums.begin()+high+1);
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