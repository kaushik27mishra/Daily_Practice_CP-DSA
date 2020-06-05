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
    int T,ans(0);
    char x;
    cin>>T;
    while(T--) {
        stack<char> line;
        string s;
        cin>>s;
        for(int i=0;s[i];i++) {
            switch (s[i]) 
            {
            case 'x':
                if(!line.empty() && line.top()=='y') {
                    line.pop();
                    ans++;
                } 
                else {
                    line.push('y');
                }
                break;
            case 'y':
                if(!line.empty() && line.top()=='x') {
                    line.pop();
                    ans++;
                } 
                else {
                    line.push('y');
                }
                break;
            default: 
                break;
            }
        }
        cout<<ans<<endl;
        ans=0;
    }

    return 0;
}