// ext*p = ref*q
/*
if ext is odd and ref is even we get 2
if ext and ref both are odd we get 1
if ext is even and ref is odd we get 0
*/
class Solution {
public:
    int mirrorReflection(int p, int q) {
        int ext=q,ref=p;
        while(ext%2==0 && ref%2==0) { // as there is no case where both are even
            ext/=2;
            ref/=2;
        }
        if(ext%2!=0 && ref%2==0)
            return 2;
        else if(ext%2!=0 && ref%2!=0)
            return 1;
        return 0;
    }
};