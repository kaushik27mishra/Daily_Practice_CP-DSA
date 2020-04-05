#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)

template<typename... T>
void read(T&... args) {
    ((cin>>args), ...);
}

template<typename... T>
void write(T&&... args) {
    ((cout<<args<<" "), ...);
}

int main() {
    int n; read(n);
    int arr[n],i(0), csum(0);

    fo(i,n)
        cin>>arr[i];

    int ans = INT_MIN;
    fo(i,n) {
        csum = max(0,csum);
        csum += arr[i];
        ans = max(ans,csum);
    }
    
    cout<<ans<<endl;

    return 0;
}


