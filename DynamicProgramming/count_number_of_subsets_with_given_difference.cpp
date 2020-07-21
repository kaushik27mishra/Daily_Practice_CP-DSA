#include<iostream>
using namespace std;
int solve(int arr[],int n,int subsetSum) {
    int t[n+1][subsetSum+1];
    for(int i=0;i<=n;i++)
        t[i][0]=1;

    for(int i=1;i<=subsetSum;i++)
        t[0][i]=0; 

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=subsetSum;j++) {
            if(arr[i-1]>j) {
                t[i][j]=t[i-1][j];
            }
            else {
                t[i][j]=t[i-1][j]+t[i-1][j-arr[i-1]];
            }
        }
    }
    return t[n][subsetSum];
}

int main() {
    int n=4;
    int sum=0;
    int arr[]={1,1,2,3};
    for(int i=0;i<n;i++)
        sum+=arr[i];

    int diff=1;
    cout<<solve(arr,n,(sum-diff)/2)<<endl;
}