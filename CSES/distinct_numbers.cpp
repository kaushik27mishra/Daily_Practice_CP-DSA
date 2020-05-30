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
    // int n,a;
    // cin>>n;
    // map<int,int> mp;
    // for(int i=0;i<n;i++) {
        // cin>>a;
        // ++mp[a];
    // }
    // cout<<mp.size()<<endl;


    // Alternate Solution
    int n,ans(1);
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++) {
        if(v[i]!=v[i+1]) ans++;
    }
    cout<<ans<<endl;
    return 0;
}

