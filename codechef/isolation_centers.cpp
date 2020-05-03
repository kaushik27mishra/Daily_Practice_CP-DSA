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

int isolationCenter(int arr[],int c) {
    int A[26];
    memcpy(A, arr, 26 * sizeof(int));
    int count=0;
    fo(i,c) {
        fo(i,26) {
            if(A[i]>0) {
                --A[i];
                count++;
            }
        }
    }

    return count;
}

int main() {
    int T;
    cin>>T;
    string s;
    int n,q;
    int c;

    while(T--) {
        cin>>n>>q;
        cin>>s;

        int countofvirus[26]={0};

        fo(i,s.size()) {
            int a= (int)s[i];
            ++countofvirus[a-97];
        }

        fo(i,q) {
            cin>>c;
            cout<<n-isolationCenter(countofvirus,c)<<endl;
        }

    }

    return 0;
}