#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)

int main() {
    int T,i(0);
    cin>>T;
    while(T--){
        int N,a;
        cin>>N;
        vector<int> arr;
        fo(i,N) {
            cin>>a;
            if(a==1) {
                arr.push_back(i);
            }
        }

        if(N<=5 && arr.size()==1) {
            cout<<"YES"<<endl;
            continue;
        }

        int j(0),flag(1);
        fo(j,arr.size()) {
            if(j!=0 &&(arr[j] - arr[j-1]) <6) {
                flag=0;
            }
        }

        arr.clear();
        if(flag==0) 
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
    
    return 0;
}


