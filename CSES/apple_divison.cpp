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

ll miniDiff(int weights[],int n,ll sum,ll xsum,ll ysum) {
    if(n==0 || sum==0) return max(xsum,ysum)-min(xsum,ysum);

    return(min(miniDiff(weights,n-1,sum-weights[n-1],xsum+(ll)weights[n-1],ysum),miniDiff(weights,n-1,sum-weights[n-1],xsum,ysum+(ll)weights[n-1])));
}

int main() {
    int n;
    ll sum(0);
    cin>>n;
    int weight[n];
    for(int i=0;i<n;i++) {
        cin>>weight[i];
        sum+=weight[i];
    }

    cout<<miniDiff(weight,n,sum,0,0)<<endl;
    return 0;
}