#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> set, int n, int sum) 
{ 
    bool t[n+1][sum+1];
    for(int i=0;i<n+1;i++) {
        t[i][0]=true;
    }

    for(int i=1;i<sum+1;i++) {
        t[0][i]=false;
    }

    for(int i=1;i<n+1;i++) {
        for(int j=0;j<sum+1;j++) {
            if(set[i-1]>j) {
                t[i][j]=t[i-1][j];
            }
            else {
                t[i][j]=t[i-1][j] || t[i-1][j-set[i-1]];
            }
        }
    }
    return t[n][sum];
} 

int main() {
    vector<int> arr={2 ,3, 7, 8, 10};
    if(isSubsetSum(arr,5,11))
        cout<<1<<endl;
    else 
        cout<<0<<endl;
    return 0;
}