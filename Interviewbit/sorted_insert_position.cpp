int Solution::searchInsert(vector<int> &A, int B) {
    int l=0;
    int r=A.size()-1;
    int mid;
    
    while(l<=r) {
        mid=l+(r-l)/2;
        if(A[mid]==B || (mid==0 && B<A[mid])||( mid>0 && B<A[mid] && B>A[mid-1])) {
            return mid;
        }
        else if(A[mid]>B) {
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    return A.size();
}
