#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=1;i<=n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define lli long long int 
#define endl "\n"

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n,c;
        cin>>n>>c;
        int arr[n+1],res(0);
        fo(i,n)
            cin>>arr[i],res+=arr[i];

        if(res<=c)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }

    return 0;
}