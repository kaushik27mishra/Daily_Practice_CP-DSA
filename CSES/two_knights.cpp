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

ll calc(ll n) {

    return (n*n*(n*n-1)-8-24-(n-4)*4*4-16-(n-4)*24-(n-4)*(n-4)*8)/2;  
}

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cout<<calc((ll)i)<<endl;
    }

    return 0;
}