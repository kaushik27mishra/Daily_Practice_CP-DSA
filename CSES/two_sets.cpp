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

bool subset1[1000000000];

int main() {
    int n;
    cin>>n;
    ll sum=(ll)n*(n+1)/2,csum(0),count(0);

    if(sum&1) {
        cout<<"NO"<<endl;
        return 0;
    }

    ll sumSubset=sum/2;
    // 1 2 3 4 5 6 7
  // 0 1 2 3 4 5 6 7
    // 7 1 6

    // 1 2 3 4 5 6 7 8
    // {18}
    // 8 + 1 + 7 + 2

    if(sumSubset%n==0) {

        subset1[n]=true;
        count++;
        csum=n;
        for(int i=1;csum!=sumSubset;i++) {
            subset1[i]=true;
            subset1[n-i]=true;
            csum+=n;
            count+=2;
        }
    }
    else {

        for(int i=1;csum!=sumSubset;i++) {
            subset1[i]=true;
            subset1[n-i+1]=true;
            csum+=(n+1);
            count+=2;
        }

    }
    cout<<"YES\n"<<count<<endl;
    for(int j=1;j<=n;j++) {
        if(subset1[j])  cout<<j<<" ";
    }

    cout<<"\n"<<n-count<<endl;
    for(int j=1;j<=n;j++) {
        if(!subset1[j])  cout<<j<<" ";
    }
    
    return 0;
}