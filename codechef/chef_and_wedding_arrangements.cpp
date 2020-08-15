#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(ll i=k;i<n;i++)
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
typedef vector<ll> vi;

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n,k;
        cin>>n>>k;
        vector<ll> guests(n+1,0);
        for(int i=0;i<n;i++) {  
            cin>>guests[i];
        }

        ll conflicts[n+1][n+1]={0};
        map<ll,ll> family_members;

        for(int i=0;i<n;i++) {
            family_members.clear();
            for(int j=i;j<n;j++) {
                if(j==0) {
                    conflicts[i][j]=0;
                }
                else {
                    conflicts[i][j]=conflicts[i][j-1];
                }

                if(family_members.count(guests[j])) {
                    if(family_members[guests[j]]==1) 
                        conflicts[i][j]++;
                    conflicts[i][j]++;
                }
                family_members[guests[j]]++;
            }
        }

        ll t[101][1001]={0};

        for(int i=0;i<n+1;i++) {
            t[1][i]=conflicts[0][i-1];
        }

        for(int i=2;i<=100;i++) {
            t[i][1]=0;
        }

        for(int i=2;i<=100;i++) {
            for(int j=2;j<=n;j++) {
                ll best=1e18;
                for(int k=1;k<j;k++) {
                    best=min(best,t[i-1][k]+conflicts[k][j-1]);
                }
                t[i][j]=best;
            }
        }

        ll res=1e18;
        for(int i=1;i<=100;i++) {
            res=min(res,i*k+t[i][n]);
        }
        cout<<res<<endl;

    }

    return 0;
}