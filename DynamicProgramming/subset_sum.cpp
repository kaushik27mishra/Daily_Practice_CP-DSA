#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> set, int n, int sum) 
{ 
    if (sum == 0) 
        return true; 
    if (n == 0 && sum != 0) 
        return false; 
  
    if (set[n - 1] > sum) 
        return isSubsetSum(set, n - 1, sum); 
  
    return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]); 
} 

int main() {
    vector<int> arr={2 ,3, 7, 8, 10};
    if(isSubsetSum(arr,5,11))
        cout<<1<<endl;
    else 
        cout<<0<<endl;
    return 0;
}