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

bool arr[32001];
vector<int> primes;

void sieve() {
    int maxN=32000;
    for(int i=2;maxN>=i;i++) {
        if(!arr[i]) {
            for(int j=i*i;maxN>=j;j+=i) {
                arr[j]=true;
            }
        }

        if(!arr[i]) {
            primes.pb(i);
        }
    }
}

int main() {
    int T;
    sieve();
    cin>>T;
    while(T--) {
        ll n,m;
        cin>>n>>m;
        if(n==1)
            n++;
        for(int i=n;m>=i;i++) {
            bool prime=true;
            for(vector< int >::iterator it = primes.begin(); (it != primes.end()) && ( ((*it)*(*it)) <=i); it++) {
                if(i%(*it)==0) {
                    prime=false;
                }
            }

            if(prime) 
                cout<<i<<endl;
        }
        cout<<endl;
    }

    return 0;
}