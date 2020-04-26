#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(ll i=k;i<n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

ll reverse(ll n) {
    ll r,res(0);
    while(n!=0) {
        r=n%10;
        res=res*10+r;
        n/=10;
    }

    return res;
}

int main() {
    ll T;
    cin>>T;
    while(T--) {
        ll n,m;
        cin>>n>>m;
        ll sum=reverse(n)+reverse(m);
        cout<<reverse(sum)<<endl;
    }

    return 0;
}