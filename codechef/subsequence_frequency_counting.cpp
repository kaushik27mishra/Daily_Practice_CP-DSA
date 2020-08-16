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

ll C[5003][5003] = {0};
ll P[1000] = {0};

ll binomialCoeffUtil(int n, int k) 
{ 
    ll dp[n+1][k+1]={0};
    int i, j; 
  
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            if (j == 0 || j == i) 
                dp[i][j] = 1; 
            else
                dp[i][j] = (dp[i - 1][j - 1]+dp[i - 1][j])%mod;
        }
    } 
    return dp[n][k];
}


void binomialCoeff(int n, int k) 
{ 
    int i, j; 
  
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
            else
                C[i][j] = (C[i - 1][j - 1]+C[i - 1][j])%mod;
        }
    } 
  
}

void power(int n) {
    P[0]=1;
    for(int i=1;i<=n;i++) {
        P[i]=(P[i-1]*2)%mod;
    }
}

int main() {
    binomialCoeff(5002,5002);
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        power(n);
        vector<int> arr(n,0);
        map<int,int> count;
        for(int i=0;i<n;i++)
            cin>>arr[i], count[arr[i]]++;
        
        map<int,int> op;
        for(auto it : count) {

            int number=it.first;
            ll sum=0;

            for(int i=1;i<=it.second;i++) {

                ll temp=1;

                for(auto aux : count) {

                    ll choose=0;
                    if(aux.first<number) {
                        if(aux.second<i) {
                            choose=P[aux.second];
                        }
                        else {
                            for(int j=0;j<i && j<=aux.second;j++) {
                                if(aux.second<5000 && j<5000)
                                    choose=(choose+C[aux.second][j])%mod;
                                else
                                    choose=(choose+binomialCoeffUtil(aux.second,j))%mod;
                            }
                        }

                    }
                    else if(aux.first>number) {
                        if(aux.second<=i) {
                            choose=P[aux.second];
                        }
                        else {
                            for(int j=0;j<=i && j<=aux.second;j++) {
                                if(aux.second<5000 && j<5000)
                                    choose=(choose+C[aux.second][j])%mod;
                                else
                                    choose=(choose+binomialCoeffUtil(aux.second,j))%mod;
                            }
                        }

                    }
                    else {
                        choose=C[aux.second][i];
                    }

                    temp=(temp*choose)%mod;
                }

                sum=(sum+temp)%mod;
            }

            op[number]=sum;
        }

        for(int i=1;i<=n;i++) {
            cout<<op[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}