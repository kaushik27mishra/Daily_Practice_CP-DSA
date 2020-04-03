#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)

template<typename... T>
void read(T&... args) {
    ((cin>>args), ...);
}

template<typename... T>
void write(T&&... args) {
    ((cout<<args<<" "), ...);
}

int main() {
    int n;
    cin>>n;
    int low=0,high=n-1;
    vector<int> arr(n,0);
    int i; 

    fo(i,n)
        cin>>arr[n];

    if(arr[0] > arr[1]) 
      return 0; 
    if(arr[n-1] > arr[n-2]) 
      return n-1; 

    while(true){

        int mid=(low+high)/2;

        if(arr[mid]<arr[mid+1]) {
            low=mid+1;
        }
        else if(arr[mid-1]>arr[mid]) {
            high=mid-1;
        }
        else {
            cout<<arr[mid]<<endl;
            // deb(arr[mid]);
            break;
        }
    }

    return 0;
}


// Alternate solution

// #include <bits/stdc++.h> 
// using namespace std; 
// 
// int findPeakUtil(int arr[], int low, 
				// int high, int n) 
// { 
	// int mid = low + (high - low)/2; /* (low + high)/2 */
// 
	// if ((mid == 0 || arr[mid - 1] <= arr[mid]) && 
		// (mid == n - 1 || arr[mid + 1] <= arr[mid])) 
		// return mid; 
// 
	// else if (mid > 0 && arr[mid - 1] > arr[mid]) 
		// return findPeakUtil(arr, low, (mid - 1), n); 
// 
	// else return findPeakUtil(arr, (mid + 1), high, n); 
// } 
// 
// int findPeak(int arr[], int n) 
// { 
	// return findPeakUtil(arr, 0, n - 1, n); 
// } 
// 
// int main() 
// { 
	// int arr[] = {1, 3, 20, 4, 1, 0}; 
	// int n = sizeof(arr) / sizeof(arr[0]); 
	// cout << "Index of a peak point is "
		// << findPeak(arr, n); 
	// return 0; 
// } 

