#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll pattern(int n) {
    if(n&1) {
        return (ll)n*(n+1)/2;
    }
    else {
        return (ll)n*(n)/2;
    }
}

int main() {
    int T,n;
    cin>>T;
    while(T--) {
        cin>>n;
        cout<<pattern(n)<<endl;
    }

    return 0;
}