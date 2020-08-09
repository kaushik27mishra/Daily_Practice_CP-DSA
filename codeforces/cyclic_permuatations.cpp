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
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

ll factorial(int n) {
    ll res=1;
    for(int i=2;i<=n;i++)
        res=(res*i)%mod;
    return res;
}

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
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    ll n;
    cin>>n;
    ll res = (factorial(n)-power(2,n-1))%mod;
    cout<<res<<endl;

    return 0;
}