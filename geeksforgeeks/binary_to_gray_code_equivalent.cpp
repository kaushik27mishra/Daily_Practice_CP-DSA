// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//  Function to find the gray code of given number N
int greyConverter(int n)
{
    return n^(n>>1);
}

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        
        //calling greyConverter() function
        cout << greyConverter(n) << endl;
    }
}
  // } Driver Code Ends