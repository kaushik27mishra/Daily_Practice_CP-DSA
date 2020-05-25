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

int arr[26]={0};

int main() {
    string s;
    cin>>s;
    int a,n;

    n=s.size();
    for(int i=0;s[i];i++) {
          a=(int)s[i];
          arr[a-65]++;      
    }

    int count=0;

    for(int i=0;i<26;i++) {
        if(arr[i]%2==1) {
            count++;
        }
    }
    
    if((count!=1 && n%2==1) || ( count!=0 && count%2==0 && n%2==0)) {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    for(int i=0,j=0;i<26;i++) {
        if(arr[i]>1) {
            while(arr[i]!=0 && arr[i]!=1) {
                s[j]=(char)(i+65);
                s[n-j-1]=(char)(i+65);
                j++;
                arr[i]-=2;
            }
        }

        if(arr[i]==1) {
            s[n/2]=char(i+65);
        }
    }

    cout<<s<<endl;
    return 0;
}