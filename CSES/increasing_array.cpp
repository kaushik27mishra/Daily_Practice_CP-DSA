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
    ll n;
    cin>>n;
    ll arr[n],ans(0);
    for(int i=0;n>i;i++) {
        cin>>arr[i];
        if(arr[i]<arr[i-1] && i>0) {
            ans+=(arr[i-1]-arr[i]);
            arr[i] += (arr[i-1]-arr[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}