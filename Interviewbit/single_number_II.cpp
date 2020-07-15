int Solution::singleNumber(const vector<int> &A) {
    vector<int>aux(32,0);
    for(int i=0;i<A.size();i++) {
        int temp=A[i];
        for(int j=0;j<32;j++) {
            if(temp&1)
                ++aux[j];    
            temp=temp>>1;
        }
    }
    int res=0;
    for(int k=0;k<32;k++) {
        if(aux[k]%3==1)
            res=res+pow(2,k);
    }
    return res;
}
