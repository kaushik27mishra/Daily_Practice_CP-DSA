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

int C[5003][5003] = {0};

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

int power(int x, unsigned int y)  
{  
    int res = 1;    
  
    x = x % mod;  
   
    if (x == 0) return 0;
  
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % mod;  
  
        y = y>>1;  
        x = (x*x) % mod;  
    }  
    return res;  
}  



int main() {
    binomialCoeff(5002,5002);
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        map<int,int> count;
        map<int,bool> shown;
        for(int i=0;i<n;i++)
            cin>>arr[i], count[arr[i]]++ , shown[arr[i]]=false;
        
        map<int,int> res;
        for(auto it : count) {

            int number=it.first;
            int sum=0;

            for(int i=1;i<=it.second;i++) {

                int temp=1;

                for(auto aux : count) {

                    int choose=0;
                    if(aux.first<number) {
                        if(aux.second<i) {
                            choose=power(2,aux.second);
                        }
                        else {
                            for(int j=0;j<i && j<=aux.second;j++) {
                                choose=(choose+C[aux.second][j])%mod;
                            }
                        }

                    }
                    else if(aux.first>number) {
                        if(aux.second<=i) {
                            choose=power(2,aux.second);
                        }
                        else {
                            for(int j=0;j<=i && j<=aux.second;j++) {
                                choose=(choose+C[aux.second][j])%mod;
                            }
                        }
                    }
                    else {
                        choose=C[it.second][i];
                    }
                    temp=(temp*choose)%mod;
                }
                sum=(sum+temp)%mod;
            }

            res[number]=sum;
        }

        for(int i=0;i<n;i++) {
            if(!shown[arr[i]]) {
                cout<<res[arr[i]]<<" ";
                shown[arr[i]]=true;
            }
            else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}