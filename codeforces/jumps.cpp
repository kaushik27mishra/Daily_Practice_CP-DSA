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
    int x;
    cin>>x;
    int sum = 0;
    int i;
    for(i=1;;i++) {
        sum+=i;
        if(sum==x) {
            cout<<i<<endl;
            return;
        }
        else if(sum>x)
            break;
    }
    int diff = sum - x;
    if(diff==1) {
        cout<<i+1<<endl;
    }   
    else {
        cout<<i<<endl;
    } 
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