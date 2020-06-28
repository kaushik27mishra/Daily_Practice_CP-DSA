vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> res;
    int T=0, B=A.size()-1,L=0,R=A[0].size()-1;
    int dir=0;
    if(B==0 && R==0) {
        res.push_back(A[0][0]);
        return res;
    }
    while(T<=B && L<=R) {
        if(dir==0) {
            for(int i=L;i<=R;i++) {
                res.push_back(A[T][i]);
            }
            T++;
        }
        else if(dir==1) {
            for(int i=T;i<=B;i++) {
                res.push_back(A[i][R]);
            }
            R--;
        }
        else if(dir==2) {
            for(int i=R;i>=L;i--) {
                res.push_back(A[B][i]);
            }
            B--;
        }
        else if(dir==3) {
            for(int i=B;i>=T;i--) {
                res.push_back(A[i][L]);
            }
            L++;
        }
        dir=(dir+1)%4;
    }
    return res;
}
