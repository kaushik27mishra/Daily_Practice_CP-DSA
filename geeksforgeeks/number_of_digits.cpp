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

// int countDigit(int n) {
    // int count=0;
    // while(n!=0) {
        // n/=10;
        // count++;
    // }
    // return count;
// }

// int countDigit(int n) {
//     if(n==0)
//         return 0;
    
//     return 1 + countDigit(n/10);
// }

int countDigit(int n) {
    return floor(log10(n)+1);
}

int main() {
    int n;
    cin>>n;

    return 0;
}