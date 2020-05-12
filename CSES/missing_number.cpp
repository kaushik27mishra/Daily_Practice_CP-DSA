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
    ll n,a;
    cin>>n;
    ll sum(0),sumOfAp;
    for(int i=1;n>i;i++) {
        cin>>a;
        sum+=a;
    }
    sumOfAp=n*(n+1)/2;
    cout<<sumOfAp-sum<<endl;

    return 0;
}