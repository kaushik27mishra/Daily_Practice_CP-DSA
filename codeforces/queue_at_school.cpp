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

int main() {
    int n,t;
    cin>>n>>t;
    string queue;
    cin>>queue;
    while (t--) {
        fo(i,n-1) {
            if(queue[i+1]=='G' && queue[i]=='B') {
                queue[i+1]='B';
                queue[i]='G';
                i++;
            }

        }
    }

    cout<<queue<<endl;
    
    return 0;
}