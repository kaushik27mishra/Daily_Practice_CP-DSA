#include <bits/stdc++.h>
using namespace std;

int t[100][100]={0};

int LCS(string x,string y,int n,int m) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(x[i-1]==y[j-1])
                t[i][j]=t[i-1][j-1]+1;
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[n][m];
}

int main() {
    string x="AGGTAB";
    string y="GXTXAYB";
    cout<<LCS(x,y,6,7)<<endl;
}