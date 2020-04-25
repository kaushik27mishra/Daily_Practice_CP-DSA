#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<=n;i++)
#define N 101
#define lli long long int 
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin>>T;
    while(T--) {
        int n;cin>>n;
        vector <int> v(n+1,0);
        v[0]=0;v[1]=1;
        Fo(i,2,n) {
            v[i]=(v[i-1]+v[i-2])%10;
        }
        cout<<v[n]<<endl;
    }

    return 0;
}

// Optimized Program to find last 
// digit of nth Fibonacci number 
// #include<bits/stdc++.h> 
// using namespace std; 
// 
// typedef long long int ll; 
// 
// Finds nth fibonacci number 
// ll fib(ll f[], ll n) 
// { 
	// 0th and 1st number of 
	// the series are 0 and 1 
	// f[0] = 0; 
	// f[1] = 1; 
// 
	// Add the previous 2 numbers 
	// in the series and store 
	// last digit of result 
	// for (ll i = 2; i <= n; i++) 
		// f[i] = (f[i - 1] + f[i - 2]) % 10; 
// 
	// return f[n]; 
// } 
// 
// Returns last digit of n'th Fibonacci Number 
// int findLastDigit(int n) 
// { 
	// ll f[60] = {0}; 
// 
	// Precomputing units digit of 
	// first 60 Fibonacci numbers 
	// fib(f, 60); 
// 
	// return f[n % 60]; 
// } 
// 
// Driver code 
// int main () 
// { 
	// ll n = 1; 
	// cout << findLastDigit(n) << endl; 
	// n = 61; 
	// cout << findLastDigit(n) << endl; 
	// n = 7; 
	// cout << findLastDigit(n) << endl; 
	// n = 67; 
	// cout << findLastDigit(n) << endl; 
	// return 0; 
// } 
// 