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

int trailingZeros(int n) {
    int count(0);
    for (int i = 5; n / i >= 1; i *= 5) 
        count = count + n / i;
         
    return count;
}

int main() {
    int n;
    cin>>n;
    cout<<trailingZeros(n)<<endl; 
    return 0;
}