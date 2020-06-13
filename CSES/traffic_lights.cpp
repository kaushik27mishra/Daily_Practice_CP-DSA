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
	cin.tie(NULL);
    
    int n,x,a;
    cin>>x>>n;
    set<int> points={0,x};
    multiset<int> lengths={x};
    for(int i=0;i<n;i++) {
        cin>>a;
        auto itr = lower_bound(points.begin(),points.end(),a);
        int left= *prev(itr);
        int right= *itr;
        points.insert(a);
		lengths.erase(lengths.find(right - left));
        lengths.insert(right-a);
        lengths.insert(a-left);
        cout<<*lengths.rbegin()<<" ";
    }
    return 0;
}