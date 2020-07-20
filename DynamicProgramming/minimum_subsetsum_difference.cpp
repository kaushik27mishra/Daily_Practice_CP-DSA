#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[],int k,int n) {
    bool t[n+1][k+1];
    for(int i=0;i<=n;i++)
        t[i][k] = true;
    
    for(int i=1;i<=k;i++) 
        t[0][i] = false;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=k;j++) {
            if(arr[i-1]>j)
                t[i][j] = t[i-1][j];
            else
                t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
        }
    }

    return t[n][k];
}

int main() {
    int n=4;
    int arr[]={1,6,11,5};
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];

    bool subSet[sum/2+1];
    for(int i=0;i<=sum/2;i++)
        subSet[i]=subsetSum(arr,i,n);
    
    int res=INT_MAX;
    for(int i=0;i<=sum/2;i++)
        if(subSet[i])
            res=min(res,sum-2*i);

    cout<<res<<endl;
    return res;    
}