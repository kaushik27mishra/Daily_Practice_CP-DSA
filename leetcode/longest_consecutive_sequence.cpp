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

/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++) {
            s.insert(nums[i]);
        }
        
        int res = 1;
        while(s.size()>1) {
            int number = *s.begin();
            int count = 1;
            s.erase(number);
            int smaller = number - 1; 
            int bigger = number + 1;
            while(s.count(bigger)>0) {
                s.erase(bigger);
                count++;
                bigger++;
            }
            while(s.count(smaller)>0) {
                s.erase(smaller);
                count++;
                smaller--;
            }
            res = max(res, count);
        }
        return res;
    }
};
*/