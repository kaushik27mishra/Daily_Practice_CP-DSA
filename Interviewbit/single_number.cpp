int Solution::singleNumber(const vector<int> &A) {
    int xorArr=A[0];
    for(int i=1;i<A.size();i++) 
        xorArr=xorArr^A[i];
    return xorArr;
}
