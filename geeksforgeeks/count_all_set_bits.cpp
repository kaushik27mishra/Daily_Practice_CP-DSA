// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// Function to count set bits in the given number x
// n: input to count the number of set bits

int countSetBits(int n)
{
    n++;
    int powerof2 = 2;
    int cnt = n/2;
    while(powerof2<=n) {
        int totalpairs = n/powerof2;
        cnt += (totalpairs/2)*powerof2;
        cnt += (totalpairs&1) ? (n%powerof2) : 0;
        powerof2<<=1;
    }
    return cnt;
}


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends