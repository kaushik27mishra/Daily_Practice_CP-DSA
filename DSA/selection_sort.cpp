#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n) {

    int min=arr[0];
    int j,i;
    for(i=0;i<n;i++) {
        min=i;
        for(j=i;j<n;j++) {
            if(arr[min]>arr[j]) {
                min=j;
            }
        }

        if(min!=i) {
            swap(arr[i],arr[min]);
        }
    }

}

int main() {

    int arr[10];
    for(int i=0;i<10;i++) {
        cin>>arr[i];
    }

    selectionSort(arr,10);

    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}