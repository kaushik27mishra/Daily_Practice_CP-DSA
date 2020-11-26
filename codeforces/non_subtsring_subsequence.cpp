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
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
    
    int T;
    cin>>T;
    while(T--) {
        int n;
        int q;
        string s;
        cin>>n>>q>>s;
        int mn[2] = {-1,-1},mx[2] = {-1,-1};
        for(int i=0;i<n;i++) {
            mx[(s[i]-'0')] = i;
            if(mn[s[i]-'0']==-1) {
                mn[s[i]-'0']=i;
            }
        }

        for(int k=0;k<q;k++) {
            int l,r;
            cin>>l>>r;
            l--; r--;
            if(mn[s[l]-'0']<l || mx[s[r]-'0']>r)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;            
        }
    }

    return 0;
}