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
    int a,n=s.size();
    for(int i=0;s[i];i++) {
        a=(int)s[i];
        ++arr[a-97];
    }  

    int fact[9] = {1,1,2,6,24,120,720,5040,40320};  
    int permu=fact[n];
    for(int i=0;i<26;i++) {
        permu=permu/fact[arr[i]];
    }
    cout<<permu<<endl;
    
    for(int i=0,j=0;i<26;i++) {
        while(arr[i]!=0) {
            s[j]=(char)(i+97);
            arr[i]--;
            j++;
        }
    }

    do { 
        cout<<s<<endl; 
    } while (next_permutation(s.begin(),s.end()));
     
    return 0;
}