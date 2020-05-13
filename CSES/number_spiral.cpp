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
    int T,i,j,a;
    ll ans;
    cin>>T;
    while(T--) {
        cin>>i>>j;
        a=max(i,j);
        ans=(ll)a*a;
        if (a&1) {
            if(j>=i)
                ans=ans-i+1;
            else
                ans=ans-a+1-(i-j);
        } 
        else {
            if(i>=j)
                ans=ans-j+1;
            else
                ans=ans-a+1-(j-i);

        }
        cout<<ans<<endl;
    }

    return 0;
}