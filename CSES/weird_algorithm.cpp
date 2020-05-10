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
    ll n;
    cin>>n;
    while(true) {
        cout<<n<<" ";
        if(n==1) break;
        if(n&1) {
            n=3*n+1;
        }
        else {
            n/=2;
        }
    }
    return 0;
}