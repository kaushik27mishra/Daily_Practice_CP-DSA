class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3) {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int close=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++) {
            int start=i+1; int end=nums.size()-1;
            while(start<end) {
                int sum=nums[i]+nums[start]+nums[end];
                if(sum>target) {
                    end--;
                }
                else {
                    start++;
                }
                
                if(abs(close-target)>abs(sum-target)) {
                    close=sum;
                }
            }
        }
        return close;
    }
};