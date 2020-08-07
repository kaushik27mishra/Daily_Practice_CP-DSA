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
        int n;
        ll k,p;
        cin>>n>>k;
        ll res=INT_MAX;
        ll moves=INT_MAX;
        bool flag=false;
        for(int i=0;i<n;i++) {
            cin>>p;
            if(k%p==0) {
                flag=true;
                if(moves>k/p) {
                    moves=k/p;    
                    res=p;
                }
            }
        }
        if(flag)
            cout<<res<<endl;
        else
            cout<<-1<<endl; 
    }

    return 0;
}