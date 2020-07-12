int Solution::numSetBits(unsigned int A) {
    int count=0,res=0;
    while(count<32){
        if(A&1) {
            res++;
        }
        A=A>>1;
        count++;
    }
    return res;
}
