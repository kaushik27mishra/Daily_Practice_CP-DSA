// time complexity sqrt(N)
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

void primeFactors(int n) {
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            int count(0);
            while(n%i==0) 
                ++count, n/=i;
            cout<<i<<"^"<<count<<endl;
        }
    } 

    if(n>1) 
        cout<<n<<"^"<<1<<endl;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n;read(n);
        primeFactors(n);
    }
    return 0;
}


