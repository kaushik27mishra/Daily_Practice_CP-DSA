#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;

int knapsack(int wt[],int val[],int w,int n) {
    if(n==0 || w==0) {
        return 0;
    }

    if(wt[n-1]<=w) {
        return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    else {
        return knapsack(wt,val,w,n-1);
    } 
}

int main() {
    int val[] = { 60, 100, 120 }; 
    int wt[] = { 10, 20, 30 }; 
    int W = 50; 
    cout << knapsack(wt, val,W, 3)<<endl;  
    return 0;
}