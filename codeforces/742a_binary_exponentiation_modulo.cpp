#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define lli long long int 
#define endl "\n"

// 1378^(n)%10 = 8^(n)%10 as only 8 decides whatever remains in the last digit of the exponent 

lli pow(lli a,lli n,lli p) {
    lli res=1;

    while(n) {

        if(n%2)
            res=(res*a)%p,--n;
        else
            a=(a*a)%p, n/=2;

    }
    
    return res;
}

int main() {
    int n;
    cin>>n;
    cout<<pow(8,n,10)<<endl;
    return 0;
}