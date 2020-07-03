#include <bits/stdc++.h>
using namespace std;


int longestSubSeg(int arr[],int n,int k) {
    int count_0=0;
    int l=0;
    int res=0;
    for(int i=0;i<n;i++) {
        if(arr[i]==0) {
            count_0++;
        }

        while(count_0>k) {
            if(arr[l]==0) {
                count_0--;
            }
            l++;
        }

        res=max(res,i-l+1);
    }
    return res;
}
int main() {
    int a[] = { 1, 0, 0, 1, 0, 1, 0, 1 }; 
    int k = 2; 
    int n = sizeof(a) / sizeof(a[0]); 
    cout << longestSubSeg(a, n, k)<<endl; 
    return 0;
}