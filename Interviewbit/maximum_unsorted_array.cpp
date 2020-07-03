vector<int> Solution::subUnsort(vector<int> &A) {
    int n=A.size();
    vector<int>res;
    int s=-1,e=-1;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            s=i;
            break;
        }
    }
    if(s==-1){
        res.push_back(-1);
        return res;
    }
    for(int i=n-1;i>0;i--){
        if(A[i]<A[i-1]){
            e=i;
            break;
        }
    }
    
    int minm=A[s],maxm=A[s];
    for(int i=s+1;i<=e;i++){
        if(A[i]<minm)
         minm=A[i];
        else if(A[i]>maxm)
         maxm=A[i];
    }
    for(int i=0;i<s;i++){
        if(A[i]>minm){
         s=i;
         break;
        }
    }
    for(int i=n-1;i>e;i--){
        if(A[i]<maxm){
         e=i;
         break;
        }
    }
    res.push_back(s);
    res.push_back(e);
    return res;
}
