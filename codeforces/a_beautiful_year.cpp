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
    int y;
    cin>>y;
    while(true) {
        y++;
        int a=y/1000;
        int b=y/100%10;
        int c=y/10%10;
        int d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
            break;
        }
    }

    cout<<y<<endl;
    return 0;
}