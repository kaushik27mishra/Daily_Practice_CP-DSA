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
    int T;
    cin>>T;
    while(T--) {
        int c,r;
        cin>>c>>r;
        if((r/9)>(c/9)) {
            cout<<0<<" ";
            if(c%9==0)
                cout<<c/9<<endl;
            else
                cout<<c/9+1<<endl;
        }
        else {
            cout<<1<<" ";
            if(r%9==0)
                cout<<r/9<<endl;
            else
                cout<<r/9+1<<endl;
        }
    }

    return 0;
}