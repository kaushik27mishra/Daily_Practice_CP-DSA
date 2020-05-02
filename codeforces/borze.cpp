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
    string code;
    cin>>code;
    string ans;

    fo(i,code.size()) {
        if(code[i]=='.') {
            ans.append("0");
        }
        else if(code[i]=='-' && code[i+1]=='.') {
            ans.append("1");
            i++;
        }
        else if(code[i]=='-' && code[i+1]=='-') {
            ans.append("2");
            i++;
        }
    }

    cout<<ans<<endl;

    return 0;
}