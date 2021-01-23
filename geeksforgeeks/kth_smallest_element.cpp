// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function

//  7 10 4 3 20 15

int partition(int arr[],int l,int r) {
    int pivot = arr[r];
    int pIndex = l;
    for(int i=l;i<=r-1;i++) {
        if(arr[i]<=pivot) {
            swap(arr[i],arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex],arr[r]);
    return pIndex;
}

int randomPartition(int arr[], int l, int r) 
{ 
    int n = r-l+1; 
    int pivot = rand() % n; 
    swap(arr[l + pivot], arr[r]); 
    return partition(arr, l, r); 
} 

int kthSmallest(int arr[], int l, int r, int k) {
    if(k > 0 && k <= (r - l + 1)) {
        int index = randomPartition(arr, l, r); 

		if ((index - l) == (k - 1)) 
			return arr[index]; 

		if ((index - l) > (k - 1)) 
			return kthSmallest(arr, l, index - 1, k); 

		return kthSmallest(arr, index + 1, r, k - index + l - 1); 
    }
    return INT_MAX;
}