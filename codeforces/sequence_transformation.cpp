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

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        vector<int> vu;
        for(int i=0;i<n;i++) {
            if(vu.empty() || vu.back()!=v[i])
                vu.push_back(v[i]);
        }

        unordered_map<int,int> fre;
        for(int x : vu) {
            fre[x]++;
        }
        int res = INT_MAX;
        for(int x : vu) {
            int count = fre[x] + 1; 
            if(vu.front()==x)
                count--;
            if(vu.back()==x)
                count--;
            res = min(res,count);
        }
        cout<<res<<endl;
    }

    return 0;
}