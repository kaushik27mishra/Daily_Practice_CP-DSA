#include<bits/stdc++.h>
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
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;


ll fact[500005];

ll recpow(ll n,ll p ,ll m=mod){
    ll ans=1;

    while(p)
    {
     if(p&1)ans=(ans*n)%m;
     n=(n*n)%m;
     p>>=1;
    }
    
    return ans%m;
}

ll mod_inv(ll n,ll m=mod){
    return recpow(n,m-2,m);
}

ll nCr(ll n, ll r, ll m=mod){
    if(r==0)return 1;
    return (((fact[n]*mod_inv(fact[n-r]))%m)*mod_inv(fact[r]))%m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    fact[0]=fact[1]=1;

    for(int i=2;i<500005;i++) {
        fact[i]=(1ll*fact[i-1]*i)%mod;
    }

    while(t--){
        ll n;
        cin>>n;
        ll a[n+1];
        map<ll,ll> count;

        for(int i=0;i<n;i++) {
            cin>>a[i];
            count[a[i]]++;
        }

        ll cm[n+3],rem[n+1];
        for(int i=0;i<=n+1;i++) {
            cm[i]=rem[i]=1;
        }

        for(auto x:count) {
           ll sum=1;
           for(int j=1;j<=x.second;j++) {
               sum+=nCr(x.second,j);
               sum%=mod;
               cm[j]*=sum;
               cm[j]%=mod;        
           }
           rem[x.second+1]*=sum;
           rem[x.second+1]%=mod;
        }

        ll mul=1;
        for(int i=1;i<=n;i++) {
            mul*=rem[i];
            mul%=mod;
            cm[i]*=mul;
            cm[i]%=mod;  
        }


        for(int i=1;i<=n;i++) { 
            ll res=0,ans,sum=1;

            for(int j=1;j<=count[i];j++) {
               ll tmp;
               ans=nCr(count[i],j);
               tmp=ans;
               sum+=ans;
               sum%=mod;
               cm[j]=(cm[j]*mod_inv(sum))%mod;
               ans*=cm[j];
               ans%=mod;
               cm[j]=(cm[j]*(sum-tmp+mod)%mod)%mod;
               res+=ans;
               res%=mod;
            }
            cout<<res%mod<<" ";
        }   
        cout<<"\n";

    }
 
return 0;
}