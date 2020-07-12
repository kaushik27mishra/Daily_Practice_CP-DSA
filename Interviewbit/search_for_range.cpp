int binarySearch(const vector<int> &A, int B,int range);
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int left=binarySearch(A,B,0);
    int right=binarySearch(A,B,1);
    return {left,right};
}

int binarySearch(const vector<int> &A, int B,int range) {
    int left=0;
    int right=A.size()-1;
    int mid;
    int res=-1;
    while(left<=right) {
        mid=(left)+(right-left)/2;
        if(A[mid]==B) {
            res=mid;
            if(range==1) {
                left=mid+1;
            }
            else {
                right=mid-1;
            }
        }
        else if(A[mid]>B) {
            right=mid-1;
        }
        else {
            left=mid+1;
        }
    }
    return res;
}
