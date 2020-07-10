class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) {
            return nums.size();
        }
        map<int,int> hash_map;
        for(int i=0;i<nums.size();i++) {
            hash_map[nums[i]]=1;
        }
        
        int temp=hash_map.begin()->first;
        int count=1;
        int res=0;
        for(auto itr=hash_map.begin();itr!=hash_map.end();itr++) {
            if((itr->first)-temp==1) {
                count++;
            }else {
                count=1;
            }
            temp=itr->first;
            res=max(count,res);
        }        
        return res;
    }
};