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

int main() {
    string s;
    cin>>s;
    int arr[26]={0};
    fo(i,s.length()) {
        int a=(int)s[i];
        ++arr[a-97];
    }
    int n; cin>>n;
    fo(i,n) {
        string x;
        cin>>x;
        bool flag=true;
        fo(j,x.length()) {
            int p = (int)x[j];
            if(arr[p-97]==0){
                flag=false;
            }
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}