#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<=n;i++)

bool isPrime(int n) {

    if(n==1)
        return false;

    for(int i=2;i*i<=n;i++) {
        if(n%i==0)
            return false;
    }

    return true;
}

int main() {
    int L,R,i(0);
    cin>>L>>R;
    Fo(i,L,R) {
        if(isPrime(i))
            cout<<i<<" ";
    }
    return 0;
}


