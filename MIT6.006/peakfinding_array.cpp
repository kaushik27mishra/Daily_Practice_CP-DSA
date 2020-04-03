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
    int n;
    cin>>n;
    int low=0,high=n;
    vector<int> arr(n,0);
    int i; 

    fo(i,n)
        read(arr[i]);

    while(true){

        int mid=(low+high)/2;

        if(arr[mid]<arr[mid+1]) {
            low=mid+1;
        }
        else if(arr[mid-1]>arr[mid]) {
            high=mid-1;
        }
        else {
            cout<<arr[mid]<<endl;
            // deb(arr[mid]);
            break;
        }
    }

    return 0;
}