class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int temp;
        for(int i=0;i<nums.size();i++) {
            temp=abs(nums[i])-1;
            if(nums[temp]<0)
                res.push_back(temp+1);
            else
                nums[temp]= -nums[temp];
        }
        
        return res;
    }
};