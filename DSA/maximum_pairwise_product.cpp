#include <iostream>
#include <vector>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define N 101
#define lli long long int 
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

int findMax(int low,int max, vector <int> &a) {
    if(low==max){
        return low;
    }
    int max1 = findMax(low,(max+low)/2,a);
    int max2 = findMax((max+low)/2+1,max,a);
    if(max1>max2) {
        return max1;
    }
    else {
        return max2;
    }
}

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n;
    cin>>n;
    vector<int> arr(n,0);
    lli res(1),x;

    fo(i,n) {
        cin>>arr[i];
    }

    // int max_index1=0;
    // fo(i,n) {
        // if(arr[i]>arr[max_index1]) {
            // max_index1=i;
        // }
    // }
// 
    // int max_index2;
    // if(max_index1==0) {
        // max_index2=1;
    // }
    // else {
        // max_index2=0;
    // }
// 
    // fo(i,n) {
        // if(arr[i]>arr[max_index2] && i!=max_index1) {
            // max_index2=i;
        // }
    // }

    // res=(long long)arr[max_index1]*arr[max_index2];
    cout<<res<<endl;

    return 0;
}