#include <bits/stdc++.h>
using namespace std;

int t[1000][1000]={0};
bool visited[1000];

string lcs(string x,string y,int n,int m) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(x[i-1]==y[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else {
                t[i][j]=t[i-1][j]+t[i][j-1];
            }
        }
    }
    string res="";
    for(int i=n;i>0;i--) {
        for(int j=n;j>0;j--) {

        }
    }
}

int main() {
    string x="GeeksforGeeks";
    string y="GeeksQuiz";
    cout<<lcs(x,y,13,9)<<endl;
}