int Solution::trailingZeroes(int A) {
    int res=0;
    for(int i=5;i<=A;i*=5) {
        res=res+A/i;
    }
    return res;
}
