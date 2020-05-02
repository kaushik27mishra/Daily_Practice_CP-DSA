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
    int T;
    cin>>T;
    string s1;
    string s2;
    while(T--) {
        cin>>s1>>s2;
        int a[26]={0};
        int b[26]={0};

        fo(i,s1.size()) {
            int x= (int)s1[i];
            ++a[x-97];
            int y= (int)s2[i];
            ++b[y-97];
        }

        bool flag=true;
        fo(i,26) {
            if(a[i]!=b[i]) {
                flag=false;
                break;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}