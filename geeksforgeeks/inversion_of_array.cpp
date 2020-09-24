#include <iostream>
#include <vector>
#define deb(x) cout<<#x<<" "<<x<<endl
using namespace std;

int merge(int arr[],int temp[],int start,int mid,int end) {
    int i=start;
    int j=mid;
    int k=start;
    int inv_count=0;
    while((i<=(mid-1)) && (j<=end)) {
        if(arr[i]<=arr[j]) {
            temp[k++]=arr[i++];
        }
        else {
            temp[k++]=arr[j++];
            inv_count = inv_count + (mid-i);
        }
    }
    
    while(i<=mid-1) {
        temp[k++]=arr[i++];
    }
        
    while(j<=end) {
        temp[k++]=arr[j++];
    }
        
    for(int i=start;i<=end;i++) {
        arr[i]=temp[i];
    }
    
    return inv_count;
}

int invcount(int arr[],int temp[],int start,int end) {
    int inv_count=0;
    if(end>start) {
        int mid = (start+end)/2;
        inv_count+=invcount(arr,temp,start,mid);
        inv_count+=invcount(arr,temp,mid+1,end);
        inv_count+=merge(arr,temp,start,mid+1,end);
    }
    return inv_count;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int temp[n];
        cout<<invcount(arr,temp,0,n-1)<<endl;
    }
	return 0;
}