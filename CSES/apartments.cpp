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
    ll n,m,k,papr(0),pappl(0),ans(0);
    cin>>n>>m>>k;
    vector<int> appl(n);
    vector<int> apr(m);
    for(int i=0;i<n;i++) cin>>appl[i];
    for(int i=0;i<m;i++) cin>>apr[i];
    sort(appl.begin(),appl.end());
    sort(apr.begin(),apr.end());    
    while(papr<m && pappl<n) {
        if(apr[papr]>=appl[pappl]-k && apr[papr]<=appl[pappl]+k) {
            ans++;
            papr++;
            pappl++;
        }
        else if(apr[papr]<appl[pappl]-k) {
            papr++;
        }
        else {
            pappl++;
        }
    }

    cout<<ans<<endl;
    return 0;
}