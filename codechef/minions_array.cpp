#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define lli long long int 
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--) {
        int n,k,ans(0);
        cin>>n>>k;
        vector<int> arr(n,0);
        fo(i,n) {
            cin>>arr[i];
            if((arr[i]+k)%7==0)
                ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}