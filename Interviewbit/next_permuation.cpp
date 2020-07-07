vector<int> Solution::nextPermutation(vector<int> &A) {
    int i,j,small,big,temp;
    for(i=A.size()-1;i>0;i--)
    {
        if(A[i]>A[i-1])
            break;
    }
    if(i==0)
    {
        sort(A.begin(),A.end());
        return A;
    }
    small=i-1;
    big=i;
    temp=big;
    for(i=A.size()-1;i>big;i--)
    {
        if(A[i]>A[small] && A[i]<A[temp])
            temp=i;
    }
    int t=A[temp];
    A[temp]=A[small];
    A[small]=t;
    small++;
    sort(A.begin()+small,A.end());
    return A;
}
