// Time complexity
// best case O(nlogn) 
// worst case o(nlogn) 
// average case O(nlogn) 

//Space complexity O(n)

#include <bits/stdc++.h>
using namespace std;


void merge(int l[],int r[],int a[]) {
    int nl = sizeof(l)/sizeof(l[0]);
    int nr = sizeof(r)/sizeof(r[0]);
    int i(0),j(0),k(0);

    while(i<nl && j<nr) {
        if(l[i]<=r[j]) {
            a[k]=a[i];
            i++;
        }
        else {
            a[k]=a[j];
            j++;
        }
        k++;
    }

    while(i<nl) {
        a[k]=a[i];
        i++;k++;
    }
    
    while(j<=nr) {
        a[k]=a[j];
        j++;k++;
    }

}

void mergeSort(int arr[]) {
    int n=sizeof(arr)/sizeof(arr[0]);

    if(n<2) return;

    int mid=n/2;
    int left[mid];
    int right[n-mid];
    
    for(int i=0;mid-1>=i;i++) 
        left[i]=arr[i];
    

    for(int j=mid;n-1>=j;j++) 
        right[j-mid]=arr[j];

    mergeSort(left);
    mergeSort(right);
    merge(left,right,arr);
}

int main() {

    int arr[10];
    for(int i=0;i<10;i++) {
        cin>>arr[i];
    }

    mergeSort(arr);

    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}