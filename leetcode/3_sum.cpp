class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) {
            int left=i+1;
            int right=nums.size()-1;
            while(left<right) {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0) {
                    res.push_back(vector<int>{nums[i],nums[left],nums[right]});
                    int leftValue=nums[left];
                    while(left<nums.size() && leftValue==nums[left]) left++;
                    int rightValue=nums[right];
                    while(right>left && rightValue==nums[right]) right--;
                }
                else if(sum<0) {
                    left++;
                }
                else {
                    right--;
                }
            }
            while(i<nums.size()-1 && nums[i]==nums[i+1]) i++;
        }
        return res;
    }
};