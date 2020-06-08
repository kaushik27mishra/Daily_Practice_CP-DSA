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

int main() {
    int n;
    ll csum(0);
    ll ans(INT_MIN);
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    for(int i=0;i<n;i++) {
        csum=max(csum,(ll)0);
        csum+=v[i];
        ans=max(csum,ans);
    }
    cout<<ans<<endl;

    return 0;
}