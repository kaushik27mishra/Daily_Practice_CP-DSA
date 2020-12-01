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
    int x,y;
    cin>>x>>y;
    int winX = 0;
    int winY = 0;
    x--;
    int diff;
    if(y<x) {
        diff =x-y;
        winX+=diff;
        x-=diff;
    }
    else {
        diff = y-x;
        winY+=diff;
        y-=diff;
    }
    cout<<winX + x<<" "<<winY + y<<endl;
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