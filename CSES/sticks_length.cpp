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
    ll sum(0);
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=(ll)v[i];
    }
    sort(all(v));
    ll median=v[n/2];
    ll w(0);
    for(int i=0;i<n;i++) {
        w=w+abs(median-v[i]);
    }
    cout<<w<<endl;
    return 0;
}