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

int gcd(int a, int b) {
    if(b==0)
        return a;
    else 
        return gcd(b,a%b);
}


int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin>>T;
    while(T--) {
        int a,b;
        cin>>a>>b;
        int gcdres = gcd(a,b);
        ll lcm = (ll)(a/gcdres)*b;
        cout<<lcm<<endl;
    }

    return 0;
}