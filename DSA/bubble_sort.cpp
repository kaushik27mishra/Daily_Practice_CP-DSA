// Time complexity
// best case O(n) -> for sorted array
// worst case o(n^2) -> for reverse sorted array
// average case O(n^2) 

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n) {

    int j,i;
    bool flag=false;
    for(i=0;i<n;i++) {
        flag=false;
        for(j=0;j<n-i-1;j++) {
            if(arr[j]<arr[j-1]) 
                flag=true, swap(arr[j],arr[j-1]);
        }

        if(!flag) break;
    }

}

int main() {

    int arr[10];
    for(int i=0;i<10;i++) {
        cin>>arr[i];
    }

    bubbleSort(arr,10);

    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}