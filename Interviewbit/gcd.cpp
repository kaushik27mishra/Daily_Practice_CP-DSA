int Solution::gcd(int a, int b) {
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
