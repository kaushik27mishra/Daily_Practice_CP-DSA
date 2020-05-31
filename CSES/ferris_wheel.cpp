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
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int main() {
    int n,x;
    cin>>n>>x;
    int start(0),end(n-1),ans(0);
    vi children(n);

    for(int i=0;i<n;i++) cin>>children[i];

    sort(all(children));

    while(start<=end) {
        if(children[start]+children[end]>x) {
            end--;
        }
        else {
            start++;
            end--;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
