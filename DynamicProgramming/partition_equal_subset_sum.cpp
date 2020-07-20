class Solution {
public:
    bool canPartition(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            sum=sum+(long long)nums[i];
        }
        int subsetSum=sum/2;
        
        return solve(nums,subsetSum,n);
    }
    
    bool solve(vector<int> nums,long long subsetSum,int n) {
        if(subsetSum==0)
            return true;
        if(subsetSum!=0 && n==0)
            return false;
        
        if(subsetSum>nums[n-1])
            return solve(nums,subsetSum,n-1);
        else {
            return solve(nums,subsetSum-nums[n-1],n-1) || solve(nums,subsetSum,n-1);
        }
    }
};