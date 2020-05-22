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

ll binaryExpo(ll a,ll n) {
    if (n==0) return 1;

    ll res;
    if(n&1) {
        res=a%mod;
        res=(res*binaryExpo(a,n-1))%mod;
    }
    else {
        res = binaryExpo(a,n/2)%mod;
        res=(res*res)%mod;
    }

    return (res)%mod;
}

int main() {
    int n;
    cin>>n;
    cout<<binaryExpo(2,n)<<endl;
    return 0;
}