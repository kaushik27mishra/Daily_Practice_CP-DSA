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
        int n;
        cin>>n;
        vector<int> arr;
        int a,sumW(0);
        fo(i,n) {
            cin>>a;
            arr.push_back(a);
            sumW+=a;
        }

        arr.resize(n);
        vector< int >::iterator mini=min_element(arr.begin(),arr.end());

        cout<<(sumW - n*(*mini))<<endl;
    }

    return 0;
}