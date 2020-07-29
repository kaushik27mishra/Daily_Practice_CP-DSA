class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==0)
                count++;
            else
                nums[i-count]=nums[i];
        }
        
        for(int i=n-1;i>=(n-count);i--)
            nums[i]=0;
    }
};