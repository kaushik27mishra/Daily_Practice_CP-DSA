int Solution::sqrt(int A) {
    int l=0,r=A;
    if(A<=1) {
        return A;
    }
    int mid;
    while(l<=r) {
        mid=l+(r-l)/2;
        if(mid<=A/mid && (mid+1)>A/(mid+1)) {
            return mid;
        }
        else if(mid>A/mid) {
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    return mid;
}
