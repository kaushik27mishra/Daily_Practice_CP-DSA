class Solution {
public:
    bool canPartition(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            sum=sum+(long long)nums[i];
        }
        
        return solve(nums,sum,n);
    }
    
    bool solve(vector<int> nums,long long sum,int n) {
        if(sum%2!=0)
            return false;
        
        bool t[n+1][sum/2+1];
        for(int i=0;i<=n;i++) {
            t[i][0]=true;
        }
        
        for(int i=1;i<=sum/2;i++) {
            t[0][i]=false;
        }
        
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=sum/2;j++) {
                if(j<nums[i-1])
                    t[i][j]=t[i-1][j];
                else
                    t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
            }
        }
        
        return t[n][sum/2];
    }
};

/*
recurrsive solution
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
*/