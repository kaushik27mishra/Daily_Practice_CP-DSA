#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
int ar[N][N], I[N][N];

void power(int A[][N],int dim,int n) {

    fo(i,dim) 
        fo(j,dim) {
            if(i==j) I[i][j]=0;
            else I[i][j]=1;
        }

    // fo(i,n)
        // multiply(I,A,dim);
    while(n) {
        if(n%2)
        multiply(I,A,dim), n--;

        else
        multiply(I,A,dim), n/=2;
    }


    fo(i,dim) 
        fo(j,dim) {
            A[i][j]=I[i][j];
        }
    

}

void multiply(int A[][N],int B[][N],int dim) {
    int res[dim +1][dim +1];

    fo(i,dim)
        fo(j,dim) {
            res[i][j]=0;
            fo(k,dim) res[i][j] += A[i][k]*B[k][j]; 
        }

    fo(i,dim) fo(j,dim) A[i][j] = res[i][j];
}

void printMat(int A[][N],int dim) {
    fo(i,dim){
        fo(j,dim) 
            cout<<A[i][j]<<" ";
        cout<<endl; 
    } 
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int dim,n;
        cin>>dim>>n;
        fo(i,dim) fo(j,dim) cin>>ar[i][j];
        power(ar,dim,n);
        printMat(ar,dim);
    }

    return 0;
}