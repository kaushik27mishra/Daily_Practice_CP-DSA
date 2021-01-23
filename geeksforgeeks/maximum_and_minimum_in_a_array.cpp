#include<bits/stdc++.h>

using namespace std;

struct Pair {
    int amax;
    int amin;
};

// tournament method
Pair getMaxMin(vector<int> &arr,int low,int high) {
    Pair res;
    if(low==high) {
        res.amax = arr[low];
        res.amin = arr[low];
        return res;
    }

    if(low==high-1) {
        if(arr[low]<arr[high]) {
            res.amax = arr[high];
            res.amin = arr[low];
        }
        else {
            res.amax = arr[low];
            res.amin = arr[high];
        }
        return res;
    }

    int mid = (low + high)/2;
    Pair resl = getMaxMin(arr,low,mid-1);
    Pair resr = getMaxMin(arr,mid,high);

    if(resl.amax<resr.amax) {
        res.amax = resr.amax;
    }
    else {
        res.amax = resl.amax;
    }

    if(resl.amin<resr.amin) {
        res.amin = resl.amin;
    }
    else {
        res.amin = resl.amin;
    }

    return res;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    Pair res = getMaxMin(arr,0,n-1);
    cout<<res.amax<<" "<<res.amin<<endl;
}