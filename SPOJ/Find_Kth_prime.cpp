// sieve-of-eratosthenes
#include <bits/stdc++.h>
using namespace std;

// #define deb(x) cout<<#x<<" "<<x<<endl;
// #define fo(i,n) for(i=0;i<n;i++)
// #define Fo(i,k,n) for(i=k;i<n;i++)

vector <int> primes;
bool arr[90000001];

void sieve() {
    int MaxN = 90000000;

    arr[0] = arr[1] = true;
    //true composite 
    //false prime
    for(int i=2;i*i<=MaxN;++i) {
        if(!arr[i]) {
            for(int j=i*i;j<=MaxN;j+=i) {
                arr[j] =true;
            }
        }
    }

    for(int i=2;i<=MaxN;++i) {
        if(!arr[i]) {
            primes.push_back(i);
        }
    }

}

int main() {
    sieve();
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        cout<<primes[(n-1)]<<endl;
    }

    return 0;
}


