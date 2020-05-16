// Time complexity
// best case O(nlogn) 
// worst case o(n^2) -> sorted array for the case when pivot is at the end
// average case O(nlogn) 

//Space complexity 
// for best case is O(logn)
// worst case O(n)

//not stable sorting algorithm

#include <bits/stdc++.h>
using namespace std;

int partion(int arr[],int start,int end) {
    int pivot=arr[end];
    int pindex=start;
    for(int i=start;i<=end-1;i++) {
        if(arr[i]<pivot) {
            swap(arr[i],arr[pindex]);
            pindex++;
        }
    }
    swap(arr[pindex],arr[end]);
    return pindex;

}

void quickSort(int arr[],int start,int end) {
    if(start<end) {
        int pindex = partion(arr,start,end);
        quickSort(arr,start,pindex-1);
        quickSort(arr,pindex+1,end);
    }
}

int main() {

    int arr[10];
    for(int i=0;i<10;i++) {
        cin>>arr[i];
    }

    quickSort(arr,0,10);

    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}