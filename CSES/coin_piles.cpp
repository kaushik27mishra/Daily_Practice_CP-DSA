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
    int T,a,b;
    cin>>T;
    while(T--) {
        cin>>a>>b;
        if(a<b) swap(a,b);

        if(a>2*b) {
            cout<<"NO"<<endl;
        }
        else {
            if((a+b)%3==0 && (2*b-a)%3==0 && ((a!=0 && b!=0) || (a==0 && b==0))) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}