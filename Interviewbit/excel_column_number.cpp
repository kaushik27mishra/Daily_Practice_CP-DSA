int Solution::titleToNumber(string A) {
    int sol=0;
    for(int i=0;i<A.size();i++) {
        sol=sol+((int)A[i]-64)*pow(26,A.size()-i-1);
    }
    return sol;
}