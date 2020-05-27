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

int x(0);

bool isSafe(int board[][N],int row,int col,int n) {
    if(board[row][col]==-1) {
        return false;
    }
    for(int i=0;i<row;i++) {
        if(board[i][col]==1) {
            return false;
        }
    }

    for(int i=0;i<col;i++) {
        if(board[row][i]==1) {
            return false;
        }
    }

    int x=row,y=col;
    while(x>=0 && y>=0) {
        if(board[x][y]==1) {
            return false;
        }
        x--;
        y--;
    }

    x=row;
    y=col;
    while(x<=n && y>=0) {
        if(board[x][y]==1) {
            return false;
        }
        x++;
        y--;
    }

    return true;

}

bool placeNqueen(int board[][N],int col,int n) {
    if(col>=n) {
        x++;
        return false;
    }

    for(int i=0;i<n;i++) {
        if(isSafe(board,i,col,n)) {
            board[i][col]=1;
            if(placeNqueen(board,col+1,n)) {
                return true;
            }
            board[i][col]=0;
        }
    }

    return false;
}

int main() {
    int n=8;
    int board[N][N];
    char c;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>c;
            if(c=='*') {
                board[i][j]=-1;
            }
            else {
                board[i][j]=0;
            }
        }
    }
    placeNqueen(board,0,n);
    cout<<x<<endl;
    return 0;
}