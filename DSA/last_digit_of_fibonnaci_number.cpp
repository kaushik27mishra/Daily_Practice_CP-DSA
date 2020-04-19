#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<=n;i++)
#define N 101
#define lli long long int 
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin>>T;
    while(T--) {
        int n;cin>>n;
        vector <int> v(n+1,0);
        v[0]=0;v[1]=1;
        Fo(i,2,n) {
            v[i]=(v[i-1]+v[i-2])%10;
        }
        cout<<v[n]<<endl;
    }

    return 0;
}