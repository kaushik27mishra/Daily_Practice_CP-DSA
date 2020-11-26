#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void prime_fact(ll n,vector<ll> &res) {
    while(n%2==0) {
        res.push_back(2);
        n=n/2;
    }

    for(int i=3;i<=sqrt(n);i+=2) {
        while(n%i==0) {
            res.push_back(i);
            n=n/i;
        }
    }
    if(n>2) res.push_back(n);
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int T;
    cin>>T;
    while(T--) {
        ll n;
        cin>>n;

        unordered_map<ll,ll> fre;
        vector<ll> pf;

        prime_fact(n,pf);

        ll best = 0;
        for(const ll& x : pf) {
            fre[x]++;
            if(fre[x]>fre[best]) {
                best=x;
            }
        }
        cout<<fre[best]<<endl;
        ll prefixbest = 1;

        for(ll i=1;i<(fre[best]-1);i++) {
            cout<<best<<" ";
            prefixbest*=best;
        }
        cout<<n/prefixbest<<endl;
    }

    return 0;
}