#include<iostream> 
using namespace std; 

#define MAX 500 

int multiply(int x, int res[], int res_size); 

void factorial(int n) 
{ 
	int res[MAX]; 

	res[0] = 1; 
	int res_size = 1; 

	for (int x=2; x<=n; x++) 
		res_size = multiply(x, res, res_size); 

	for (int i=res_size-1; i>=0; i--) 
		cout << res[i]; 
    cout<<endl; 
} 

int multiply(int x, int res[], int res_size) 
{ 
	int carry = 0; 

	for (int i=0; i<res_size; i++) 
	{ 
		int prod = res[i] * x + carry; 

		res[i] = prod % 10; 

		carry = prod/10;	 
	} 

	while (carry) 
	{ 
		res[res_size] = carry%10; 
		carry = carry/10; 
		res_size++; 
	} 
	return res_size; 
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
	    factorial(n);
    }
	return 0; 
} 
