// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// function to swap odd and even bits
unsigned int swapBits(unsigned int n)
{
    unsigned int even_bits = n & 0xAAAAAAAA;  
  
    unsigned int odd_bits = n & 0x55555555;  
  
    even_bits >>= 1;   
    odd_bits <<= 1;  
  
    return (even_bits | odd_bits); 
	
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		//calling swapBits() method
		cout << swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends