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
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int T;
    cin>>T;
    while(T--) {
        int n,m;
        cin>>n>>m;
        vector<vector<char>> con(n,vector<char>(m));
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin>>con[i][j];
            }
        }
        int res=0;
        for(int j=0;j<m-1;j++) {
            if(con[n-1][j]!='R')
                res++;
        }


        for(int i=0;i<n-1;i++) {
            if(con[i][m-1]!='D')
                res++;
        }

        
        cout<<res<<endl;
    }

    return 0;
}

/*
if the question was to start at (0,0) and the minimum number of changes required to move to (n,m)
Misinterpreted the question :)
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
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int T;
    cin>>T;
    while(T--) {
        int n,m;
        cin>>n>>m;
        vector<vector<char>> con(n,vector<char>(m));
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin>>con[i][j];
            }
        }

        int dp[n][m]={0};
        for(int i=n-1;i>=0;i--) {
            for(int j=m-1;j>=0;j--) {
                if(i==n-1 && j==m-1) {
                    dp[i][j]=0;
                }
                else if(i==n-1) {
                    if(con[i][j]!='R')
                        dp[i][j]=dp[i][j+1]+1; 
                    else
                        dp[i][j]=dp[i][j+1];
                }
                else if(j==m-1) {
                    if(con[i][j]!='D')
                        dp[i][j]=dp[i+1][j]+1;
                    else
                        dp[i][j]=dp[i+1][j];
                }
                else {
                    if(dp[i+1][j]>dp[i][j+1]) {
                        if(con[i][j]!='R')
                            dp[i][j]=dp[i][j+1]+1; 
                        else
                            dp[i][j]=dp[i][j+1]; 
                    }
                    else if(dp[i+1][j]==dp[i][j+1]) {
                        if(con[i][j]=='R')
                            dp[i][j]=dp[i][j+1];
                        else
                            dp[i][j]=dp[i+1][j];
                    }
                    else {
                        if(con[i][j]!='D')
                            dp[i][j]=dp[i+1][j]+1;
                        else
                            dp[i][j]=dp[i+1][j];
                    }
                }
            }
        }
        cout<<dp[0][0]<<endl;
    }

    return 0;
}
*/