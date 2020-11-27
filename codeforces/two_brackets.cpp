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

void solve() {
    string s;
    cin>>s;
    int ans = 0;
    int fr = 0, fs = 0;
    for(int i=0;s[i];i++) {
        if(s[i]=='(') {
            fr++;
        }
        else if(s[i]=='[') {
            fs++;
        }
        else if(s[i]==')') {
            if(fr) {
                ans++;
                fr--;
            }
        }
        else {
            if(fs) {
                ans++;
                fs--;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int T;
    cin>>T;
    while(T--) {
        solve();
    }

    return 0;
}