int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int res=0;
    int x1=A[0],y1=B[0],x2,y2;
    for(int i=1;i<A.size();i++) {
        x2=A[i]; 
        y2=B[i];
        if(x2*x1<=0 && y2*y1<=0) {
            res+=max(abs(x2)+abs(x1),abs(y2)+abs(y1));
        }
        else if(x2*x1<=0 && y2*y1>=0) {
            res+=max(abs(x2)+abs(x1),abs(abs(y2)-abs(y1)));
        }
        else if(y2*y1<=0 && x2*x1>=0) {
            res+=max(abs(abs(x2)-abs(x1)),abs(y2)+abs(y1));
        }
        else {
            res+=max(abs(abs(x2)-abs(x1)),abs(abs(y2)-abs(y1)));
        }
        x1=x2;
        y1=y2;
    }
    return res;
}
