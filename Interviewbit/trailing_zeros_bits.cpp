int Solution::solve(int A) {
    int count=0;
    while((A&1)==0) {
        count++;
        A=A>>1;
    }
    return count;
}
