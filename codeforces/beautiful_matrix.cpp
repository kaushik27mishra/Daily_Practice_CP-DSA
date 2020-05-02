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

int matrix[5][5];

int main() {
    int row;
    int col;
    fo(i,5) {
        fo(j,5) {
            cin>>matrix[i][j];
            if(matrix[i][j]==1) {
                row=i;
                col=j;
            }
        }
    }

    int res = abs(2-row) + abs(2-col);
    cout<<res<<endl;

    return 0;
}