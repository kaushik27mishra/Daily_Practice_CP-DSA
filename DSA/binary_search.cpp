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

int binarySearch(long int arr[],int n, int a) {
    int left=0,right=n-1,mid,result=-1;
    while(left<=right) {
        mid=left+(right-left)/2;

        if(arr[mid]==a) {
            result=mid;
            right=mid-1; //for finding first occurence
            // left = mid +1; for finding last occurence
        }

        if(arr[mid]>a) right=mid-1;
        else left=mid+1;
    }

    return result;
}

int main() {
    int n,q;
    cin>>n>>q;
    long int arr[n],a;
    fo(i,n) {
        cin>>arr[i];
    }
    while(q--) {
        cin>>a;
        cout<<binarySearch(arr,n,a)<<endl;
    }

    return 0;
}