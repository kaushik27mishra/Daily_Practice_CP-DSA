#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)

int arr[1001];

void sieve() {
    int maxN = 1000;

    for(int i=0;i<=maxN;i++) arr[i]=-1;

    for(int i=2;i<=maxN;i++) {
        if(arr[i]==-1){
            for(int j=i*i;j<=maxN;j+=i) {
                if(arr[j]==-1) {
                    arr[j] = i;
                }
            }
        }
    }
    
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        
    }
    return 0;
}


