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

int main() {
    string s;
    cin>>s;
    int count(1),ans(0);
    char c=s[0];
    int n=s.size();
    for(int i=1;n>i;i++) {
        if(s[i]==c) {
            count++;
        }
        else {
            ans = max(ans,count);
            count=1; 
            c=s[i];
        }
    }
    ans = max(ans,count);
    
    cout<<ans<<endl;
    return 0;
}