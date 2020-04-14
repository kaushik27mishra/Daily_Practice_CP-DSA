#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define lli long long int 
#define endl "\n"

int main() {
    int T;
    cin>>T;
    while(T--) {
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int rema=x-y;
        int p,c,flag(0);
        fo(i,n) {
            cin>>p>>c;
            if(rema<=p && c<=k) {
                flag=1;
            }    
        }

        if(flag==1)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }

    return 0;
}