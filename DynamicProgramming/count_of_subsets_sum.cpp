#include <bits/stdc++.h>
using namespace std;

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

int main() {
    int arr[]={1, 2, 3, 3};
    int k=6;
    cout<<solve(arr,6,4)<<endl;
}