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

void powerset(string s) {
    int n = s.size();
    int power = pow(2,n);
    for(int i=0;i<power;i++) {
        for(int j=0;j<n;j++) {
            if((i&(1<<j))!=0) {
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}

int main() {
    string s;
    cin>>s;
    powerset(s);
    return 0;
}