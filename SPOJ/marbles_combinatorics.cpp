#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

ll binomialCoeff(int n, int k)  
{  
    ll res = 1;  
  
    if ( k > n - k )  
        k = n - k;  
  
    for (int i = 0; i < k; ++i)  
    {  
        res *= (n - i);  
        res /= (i + 1);  
    }  
  
    return res;  
}  

int main() {
    int T,n,k;
    cin>>T;
    while(T--) {
        cin>>n>>k;
        cout<<binomialCoeff(n-1,k-1)<<endl;
    }

    return 0;
}