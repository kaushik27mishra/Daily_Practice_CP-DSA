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

ll w(0),steps(0);
bool v[7][7];
void solve(int r,int c) {
    if(r==6 && c==0) {
        if(steps==48) w++;
        return;
    }

    if(v[r][c]) {
        return;
    }

    v[r][c]=true;
    
    if(r>0 && !v[r-1][c]) {
        steps++;
        solve(r-1,c);
        steps--;
    }

    if(r<6 && !v[r+1][c]) {
        steps++;
        solve(r+1,c);
        steps--;
    }

    if(c>0 && !v[r][c-1]) {
        steps++;
        solve(r,c-1);
        steps--;
    }

    if(c<6 && !v[r][c+1]) {
        steps++;
        solve(r,c+1);
        steps--;
    }

    v[r][c]=false;
}

int main() {
    solve(0,0);
    cout<<w<<endl;
    return 0;
}