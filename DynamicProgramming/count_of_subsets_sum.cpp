#include <bits/stdc++.h>
using namespace std;

int solve(int arr[],int k,int n) {
    int t[n+1][k+1];
    for(int i=0;i<=n;i++)
        t[i][0]=1;
    for(int j=1;j<=k;j++)
        t[0][j]=0;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=k;j++) {
            if(arr[i-1]>j)
                t[i][j]=t[i-1][j];
            else
                t[i][j]=t[i-1][j]+t[i-1][j-arr[i-1]];
        }
    }
    return t[n][k];
}


int main() {
    int arr[]={1, 2, 3, 3};
    int k=6;
    cout<<solve(arr,6,4)<<endl;
}
/*
int solve(int arr[],int k,int n) {
    if(k==0)
        return 1;
    if(k!=0 && n==0)
        return 0;
    
    if(arr[n-1]>k)
        return solve(arr,k,n-1);
    else
        return solve(arr,k-arr[n-1],n-1) + solve(arr,k,n-1); 
}
*/