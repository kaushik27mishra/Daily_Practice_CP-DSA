#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define mod 1000000007

ll binomialCoeff(int n, int k)  
{  
    ll res = 1;  
  
    if ( k > n - k )  
        k = n - k;  
  
    for (int i = 0; i < k; ++i)  
    {  
        res = (res* (n - i))%mod;  
        res /= (i + 1);  
    }  
  
    return res;  
}

int find(int arr[], int n, int d, int k) 
{ 
    sort(arr,arr+n); 
    ll ans = 0, end = n, co = 0 ,start = 0; 
  
    for (int i = 0; i < n; i++) { 
  
        int val = arr[i] + d; 
          
        start = i; 
        while (start < end - 1){ 
            int mid = (start + end) / 2; 
    
            if (arr[mid] > val) 
                end = mid; 
    
            else
                start = mid + 1; 
        } 

        if (start != n and arr[start]<= val) start++; 
    
        int c = start-i; 
    
        if (c >= k){ 
            co += binomialCoeff(c - 1, k - 1);
        } 
    } 
    return co; 
} 


int main() {
    int n,l,k;
    // n size of array
    // l size of subarray
    // k diff between max and min

    cin>>n>>l>>k;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    cout<<find(arr,n,k,l)<<endl;    
    return 0;
}