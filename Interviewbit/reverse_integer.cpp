int Solution::reverse(int n) {
    long long res=0;
    while(n){
        res=res*10+n%10;
        if(res>INT_MAX||res<INT_MIN) return 0;
        n=n/10;
    }
    return res;
}
