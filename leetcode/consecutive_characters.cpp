class Solution {
public:
    int maxPower(string s) {
        if(s.size()<=1)
            return s.size();
        int res = 0;
        int count = 1;
        for(int i=1;s[i];i++) {
            if(s[i]==s[i-1]) {
                count++;
            }
            else {
                count=1;
            }
            res = max(res,count);
        }
        return res;
    }
};