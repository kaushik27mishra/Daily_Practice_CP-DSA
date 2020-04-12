#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)

// template<typename... T>
// void read(T&... args) {
//     ((cin>>args), ...);
// }

// template<typename... T>
// void write(T&&... args) {
//     ((cout<<args<<" "), ...);
// }

bool isPrime(int n) {
    for(int i=2;i*i>=n;++i) {
        if(n%i==0)
            return false;
    }

    return true;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int a;
        cin>>a;
        if(isPrime) 
            cout << "yes";
        else 
            cout << "no";
    }
    return 0;
}


