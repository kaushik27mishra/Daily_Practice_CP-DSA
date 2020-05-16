#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n) {
    int value,hole;
    for(int i=1;n>i;i++) {
        value=arr[i];
        hole=i;
        while(hole>0 && arr[hole-1]>value) {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
   }
}

int main() {

    int arr[10];
    for(int i=0;i<10;i++) {
        cin>>arr[i];
    }

    insertionSort(arr,10);

    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}