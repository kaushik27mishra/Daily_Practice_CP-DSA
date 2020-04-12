#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)

bool arr[1000001];
int pp[1000001];

void seive() {
    int maxN=1000000;
    // true for compopsite
    // false for prime
    arr[0]= arr[1] = true;
    for(long long int i=2;i<=maxN;i++) {
        if(!arr[i]) {
            for(long long int j=i*i;j<=maxN;j+=i) {
                arr[j] = true;
            }
        }
    }

    long long int i(0);
    long long int count(0);
    fo(i,maxN) {
        if(!arr[i])
        count++;

        if(!arr[count]) 
            pp[i] = 1;
        else
            pp[i] = 0; 
    }

    fo(i,maxN) {
        pp[i] += pp[i-1];
    }
}


int main() {
    seive();
    int T;
    cin>>T;
    while(T--) {
        long long int L,R;
        cin>>L>>R;
        long long int count(0);
        count = pp[R] - pp[L-1];    
        cout<<count<<endl;
    }
    return 0;
}


