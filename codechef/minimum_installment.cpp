#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

int main() {
    int n,m,u,v,w;
    ll sum(0);
    cin>>n>>m;
    int arr[m+1]={0};

    fo(i,m) {
        cin>>u>>v>>w;
        arr[u]=arr[u]+w;
        arr[v]=arr[v]-w;
    }

    for(int i=1;i<=m;i++) {
        if(arr[i]>0) {
            sum=sum+(ll)arr[i];
        }
    }

    cout<<sum<<endl;

    return 0;
}