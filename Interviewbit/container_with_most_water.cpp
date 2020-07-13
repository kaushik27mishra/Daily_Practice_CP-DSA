int Solution::maxArea(vector<int> &A) {
    int j=A.size()-1,i=0;
    int res=0;
    while(i<j) {
        res=max(res,(j-i)*min(A[i],A[j]));
        if(A[i]<=A[j]) {
            i++;
        }
        else {
            j--;
        }
    }
    return res;
}
