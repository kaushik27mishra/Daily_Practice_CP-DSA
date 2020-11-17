class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size()-1;
        int res = -1;
        while(left<=right) {
            int mid = (left+right)/2;
            if(arr[mid]<arr[mid+1])
                left=mid+1;
            else if(arr[mid-1]>arr[mid])
                right=mid-1;
            else {
                res=mid;
                break;
            }
        }
        return res;
    }
};