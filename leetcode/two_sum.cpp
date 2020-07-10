class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	map<int,int>res_hash;
        vector <int> result;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(res_hash.find(target-nums[i])!=res_hash.end())
            {
                
                result.push_back(res_hash[target-nums[i]]);
                result.push_back(i);
                return result;
            }
            else
                res_hash[nums[i]] = i;
        }
        
        return {-1};
    }
};