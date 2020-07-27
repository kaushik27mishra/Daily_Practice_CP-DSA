#include <bits/stdc++.h>
using namespace std;

int t[1000][1000]={0};

int lcs(string x,string y,int n,int m) {
    int res=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(x[i-1]==y[j-1]) {
                t[i][j]=1+t[i-1][j-1];
                res=max(res,t[i][j]);
            }
            else {
                t[i][j]=0;
            }
        }
    }
    return res;
}

int main() {
    string x="GeeksforGeeks";
    string y="GeeksQuiz";
    cout<<lcs(x,y,13,9)<<endl;
}