class Solution {
public:
    bool isPalindrome(string s) {
        int beg=0;
        int end=s.size()-1;
        while(beg<end) {
            if(!isalnum(s[beg]))
                beg++;
            if(!isalnum(s[end]))
                end--;
            
            if(isalnum(s[beg]) && isalnum(s[end])) {
                if(s[beg]==s[end] || tolower(s[beg])==s[end] || s[beg]==tolower(s[end])) {
                    beg++;
                    end--;   
                }
                else {
                    return false;
                }
            }
        }
        
        return true;
    }
};