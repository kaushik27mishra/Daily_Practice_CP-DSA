vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    int carry=0;
    for(int i=n-1;i>=0;i--) {
        if(A[i]==9) {
            A[i]=0;
            carry=1;
            if(i==0) {
                A.push_back(1);
                reverse(A.begin(),A.end());
                A.resize(n+1);
                break;
            }
        }
        else {
            ++A[i];
            break;
        }
    }
    
    while(A[0]==0) {
        A.erase(A.begin());
    }    
    
    return A;
}
