/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int BinarySearchLeft(MountainArray &mountainArr,int start, int end, int target) {
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            int midVal = mountainArr.get(mid);
            cout << midVal << endl;
            if(midVal == target){
                ans = mid;
                break;
            }
            else if(midVal > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
    int BinarySearchRight(MountainArray &mountainArr,int start, int end, int target) {
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            int midVal = mountainArr.get(mid);
            cout << midVal << endl;
            if(midVal == target){
                ans = mid;
                break;
            }
            else if(midVal > target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int l = 0, h = mountainArr.length()-1;
        while(l < h) {
            int  mid = (l+h)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                l = mid+1;
            }
            else{
                h = mid;
            }
        }
        int peak = l;
        int left = BinarySearchLeft(mountainArr, 0, peak, target);
        if(left != -1) return left;
        
        int right = BinarySearchRight(mountainArr, peak, mountainArr.length()-1 ,target);
        return right;
    }
};