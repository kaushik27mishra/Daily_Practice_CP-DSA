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
    if(n==1) {
        cout<<n;
        return 0;
    }
    if(n<=3) {
        cout<<"NO SOLUTION";
        return 0;
    }
    int k=n-1;
    for(int i=1;n>=i;i++) {
        cout<<k<<" ";
        k=k-2;
        if(k<=0) k=n;
    }

    return 0;
}