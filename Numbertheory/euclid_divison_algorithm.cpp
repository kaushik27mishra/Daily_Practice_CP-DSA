#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define lli long long int 
#define endl "\n"

int gcd(int a, int b) {
    if(b==0)
        return a;
    else 
        return gcd(b,a%b);
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<endl;
    }

    return 0;
}