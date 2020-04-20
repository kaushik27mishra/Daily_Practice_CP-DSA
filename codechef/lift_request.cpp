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
    int T;
    cin>>T;
    int a(0);
    while(T--) {
        int n,q;
        cin>>n>>q;
        ll res(0);
        int fi, di;
        fo(i,q) {
            cin>>fi>>di;
            res+=abs(fi-a);
            res+=abs(di-fi);
            a=di;
        }
        cout<<res<<endl;
    }

    return 0;
}