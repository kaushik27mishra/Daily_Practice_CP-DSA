vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> res(A,vector<int>(A));
    int L=0,R=A-1,T=0,B=A-1;
    int step=0;
    int k=1;
    while(L<=R && T<=B) {
        if(step==0) {
            for(int i=L;i<=R;i++) {
                res[T][i]=k;
                k++;
            }
            T++;
        }
        else if(step==1) {
            for(int i=T;i<=B;i++) {
                res[i][R]=k;
                k++;
            }
            R--;
        }
        else if(step==2) {
            for(int i=R;i>=L;i--) {
                res[B][i]=k;
                k++;
            }
            B--;
        }
        else if(step==3) {
            for(int i=B;i>=T;i--) {
                res[i][L]=k;
                k++;
            }
            L++;
        }
        step=(step+1)%4;
    }
    return res;
}
