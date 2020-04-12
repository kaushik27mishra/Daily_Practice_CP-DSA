// time complexity logn
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

int power(int a,int n) {
    int res=1;

    while(n) {
        if(n%2)
        res*=a, n--;

        else
        a*=a, n/=2;
    }

    return res;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        
    }
    return 0;
}


