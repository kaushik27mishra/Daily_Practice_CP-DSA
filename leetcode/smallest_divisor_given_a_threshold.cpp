class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = nums[nums.size()-1];
        while(left <= right) {
            int pivot = left + (right-left)/2;
            int num = computeSum(nums,pivot);
            if (num > threshold) 
                left = pivot + 1;
            else
                right = pivot -1;
        }
        
        return left;
        
    }
    
    long computeSum(vector<int> &nums,int x) {
        long s = 0;
        for(int n : nums) {
            s+= n/x + (n%x==0 ? 0 : 1);
        }
        return s;
    }
};