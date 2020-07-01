int Solution::repeatedNumber(const vector<int> &A) {
    int aux[A.size()+1]={0};
    for(int i=0;i<A.size();i++) {
        if(aux[A[i]]!=0)
            return A[i];
        else
            ++aux[A[i]];
    }
    return -1;
}
