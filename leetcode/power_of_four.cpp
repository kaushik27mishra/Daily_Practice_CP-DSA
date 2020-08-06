class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<0)
            return false;
        if(num==1)
            return true;
        
        if((num&(num-1))!=0)
            return false;
        else
            if(num%10==4 || num%10==6)
                return true;
        
        return false;
    }
};