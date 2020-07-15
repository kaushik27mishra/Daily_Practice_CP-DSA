unsigned int Solution::reverse(unsigned int A) {
    int y=31;
    unsigned int res=0;
    for(int i=0;i<32;i++) {
        if((A&1)==1)
            res=res+pow(2,y);
        y--;
        A=A>>1;
    }
    if((A&1)==1)
        res=res+pow(2,y);
    return res;
}
