#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)

template<typename... T>
void read(T&... args) {
    ((cin>>args), ...);
}

template<typename... T>
void write(T&&... args) {
    ((cout<<args<<" "), ...);
}

int main() {
    int T,i(0);cin>>T;
    fo(i,T){
        int N,a;
        cin>>N;
        vector<int> arr;
        int j(0);
        fo(j,N){
            cin>>a;
            if(a==1) {
                arr.push_back(j);
            }
        }

        fo(j,N){
            cout<<arr[i];
        }
    }
    
    return 0;
}


