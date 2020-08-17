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

ll C[10004][10004] = {0};
ll P[500002] = {0};

ll binomialCoeffUtil(int n, int k)  
{  
    ll res = 1;  
  
    if ( k > n - k )  
        k = n - k;  
  
    for (int i = 0; i < k; ++i)  
    {  
        res = (res* (n - i))%mod;  
        res /= (i + 1);  
    }  
  
    return res;  
}

ll binaryExpoUtil(ll a,ll n) {
    if (n==0) return 1;

    ll res;
    if(n&1) {
        res=a%mod;
        res=(res*binaryExpoUtil(a,n-1))%mod;
    }
    else {
        res = binaryExpoUtil(a,n/2)%mod;
        res=(res*res)%mod;
    }

    return (res)%mod;
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
    binomialCoeff(10003,10003);
    power(500000);
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        map<int,int> count;
        for(int i=0;i<n;i++)
            cin>>arr[i], count[arr[i]]++;

        unordered_map<int,vector<ll>> nCr_sum;
        bool flag_count=true;
        for(auto it : count) {
            if(it.second>1)
                flag_count=false;
            nCr_sum[it.first].resize(it.second+1);
            nCr_sum[it.first][0]=1;
            for(int i=1;i<=it.second;i++) {
                if(it.second<=10003 && i<=10003)
                    nCr_sum[it.first][i]=(nCr_sum[it.first][i-1]+C[it.second][i])%mod;
                else
                    nCr_sum[it.first][i]=(nCr_sum[it.first][i-1]+binomialCoeffUtil(it.second,i))%mod;
            }
        }

        unordered_map<int,int> op;
        if(flag_count) {
            int i=1;
            for(auto it : count) {
                op[it.first]=P[n-i];
                i++;
            }
        }
        else {
            for(auto it : count) {

                int number=it.first;
                ll sum=0;

                for(int i=1;i<=it.second;i++) {

                    ll temp=1;

                    for(auto aux : count) {

                        ll choose=0;
                        if(aux.first<number) {
                            if(aux.second<i) {
                                if(aux.second<=500000)
                                    choose = P[aux.second];
                                else
                                    choose = binaryExpoUtil(2,aux.second);
                            }
                            else {
                                choose = nCr_sum[aux.first][i-1];
                            }

                        }
                        else if(aux.first>number) {
                            if(aux.second<=i) {
                                if(aux.second<=500000)
                                    choose = P[aux.second];
                                else
                                    choose = binaryExpoUtil(2,aux.second);
                            }
                            else {
                                choose = nCr_sum[aux.first][i];
                            }

                        }
                        else {
                            if(aux.second<10003 && i<10003)
                                choose=(C[aux.second][i])%mod;
                            else
                                choose=(binomialCoeffUtil(aux.second,i))%mod;
                        }

                        temp=(temp*choose)%mod;
                    }

                    sum=(sum+temp)%mod;
                }

                op[number]=sum;
            }   
        }
        

        for(int i=1;i<=n;i++) {
            cout<<op[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}