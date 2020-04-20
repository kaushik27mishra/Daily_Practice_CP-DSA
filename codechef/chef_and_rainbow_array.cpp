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
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        vector <int> v(n);
        int mid(0);

        if(n%2==1)
            mid=n/2;
        else
            mid=(n/2)-1;

        deb(mid);
        bool flag = true;
        fo(i,n) {
            cin>>v[i];
            if((i<=mid) && i>=1) {
                if((v[i]-v[i-1])!=1 || (v[i]-v[i-1])!=0)
                    flag=false;
            }
            else {                                
                if(v[i]!=v[i-mid])
                    flag=false;
            }
        }

        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}