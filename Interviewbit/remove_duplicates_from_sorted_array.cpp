int Solution::removeDuplicates(vector<int> &A) {
    int j=0;
    int n=A.size();
    for(int i=0;i<n-1;i++) {
        if(A[i]!=A[i+1])
            A[j++]=A[i];
    }
    A[j++]=A[n-1];
    return j;
}