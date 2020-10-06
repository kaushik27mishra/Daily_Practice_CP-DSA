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
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int table[256]={0}; // 256 because 8 bits count upto 256

void initialize() {
    table[0]=0;
    for(int i=0;i<256;i++) {
        table[i] = i&1 + table[i/2];
    }
}

int count(int n) {
	return table[n & 0xff] + table[(n >> 8) & 0xff] + table[(n >> 16) & 0xff] + table[n >> 24];
}

int main() {
    initialize();
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;
}