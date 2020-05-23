#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int T,L;
    cin>>T;
    while(T--) {
        cin>>L;
        if(L<=2) cout<<L*L*L<<endl;
        else cout<<(ll)L*L*L-(ll)(L-2)*(L-2)*(L-2)<<endl;
    }

    return 0;
}