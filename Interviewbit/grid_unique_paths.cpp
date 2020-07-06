int Solution::uniquePaths(int A, int B) {
    int res=1;
    int maxi=max(A-1,B-1);
    int mini=min(A-1,B-1);
    
    for(int i=maxi+1;i<=(A-1+B-1);i++) {
        res=res*i;
        res=res/(i-maxi);
    }
    return res;
}