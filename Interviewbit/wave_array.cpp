vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0,j=1;i<A.size() && j<A.size();i+=2,j+=2) {
        swap(A[i],A[j]);
    }
    return A;
}
