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
    int n;
    cin>>n;
    int x,y,z;
    int xsum(0),ysum(0),zsum(0);
    while(n--) {
        cin>>x>>y>>z;
        xsum+=x;
        ysum+=y;
        zsum+=z;

    }

    if(xsum==0 && ysum==0 && zsum==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}