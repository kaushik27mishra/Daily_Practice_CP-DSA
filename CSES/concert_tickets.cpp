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

    int n,m,x;
    cin>>n>>m;
    multiset<int,greater<int>> tickets; // descending order
    vi customers(m);
    for(int i=0;i<n;i++) {
        cin>>x;
        tickets.insert(x);
    }

    for(int i=0;i<m;i++) {
        cin>>customers[i];
        // lower biund will return the next smallest element while using with a multiset sort in descending order
        auto itr=tickets.lower_bound(customers[i]);
        if(itr==tickets.end()) {
            cout<<"-1\n"<<endl;
        }
        else {  
            cout<<*itr<<endl;
            tickets.erase(itr);
        }            
    }    
    
    return 0;
}
