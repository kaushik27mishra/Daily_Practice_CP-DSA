#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=1;i<=n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define lli long long int 
#define endl "\n"

int pre[100000],suff[100000];

int gcd(int a,int b) {
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n,q,l,r;
        cin>>n>>q;
        int arr[n];

        fo(i,n)
            cin>>arr[i];

        pre[0]=suff[n+1]=0;

        fo(i,n)
            pre[i] = gcd(pre[i-1],arr[i]);

        for(int i=n;i>=1;i--) 
            suff[i] = gcd(arr[i],suff[i+1]);

        fo(i,q) {
            cin>>l>>r;
            cout<<gcd(pre[l-1],suff[r+1])<<endl;
        }

    }

    return 0;
}