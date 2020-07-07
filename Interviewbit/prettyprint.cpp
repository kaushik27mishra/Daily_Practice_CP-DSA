vector<vector<int> > Solution::prettyPrint(int A) {
    vector<vector<int>> res(2*A-1,vector<int>(2*A-1,0));
    int step=0;
    int L=0,R=2*A-2,T=0,B=R=2*A-2;
    while(L<=R && T<=B) {
        if(step==0) {
            for(int i=L;i<=R;i++) 
                res[T][i]=A;
            T++;
        }
        else if(step==1) {
            for(int i=T;i<=B;i++) 
                res[i][R]=A;
            R--;
        }
        else if(step==2) {
            for(int i=R;i>=L;i--) 
                res[B][i]=A;
            B--;
        }
        else if(step==3) {
            for(int i=B;i>=T;i--) 
                res[i][L]=A;
            L++;
        }
        step++;
        if(step==4) {
            step=0;
            A--;
        }
    }
    return res;
}
