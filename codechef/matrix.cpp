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

ll power(ll a,ll n) {
    ll res=1;

    a=a%mod;

    while(n) {
        if(n%2)
        res=(res*a)%mod, n--;

        else
        a=(a*a)%mod, n/=2;
    }

    return res;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        ll n,a(0);
        cin>>n>>a;
        ll res(1),p=-a;
        for(int i=1;n>=i;i++) {
            if(i==1) {
                a*=a;
            }
            else {
                a=power(res,2*i-1);
            }
            if(i!=n)
                res=(res*a)%mod, p+=a;
            else
                p+=a;
        }
        cout<<p<<endl;
    }

    return 0;
}