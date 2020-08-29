// https://www.geeksforgeeks.org/program-to-print-the-pattern-1020304017018019020-50607014015016-809012013-10011/
#include <bits/stdc++.h> 
using namespace std; 

void printPattern(int n) {
    int num=1;
    for(int i=1;i<=n;i++) {
        int temp=2*(i-1);
        while(temp) {
            cout<<"**";
            temp-=2;
        }
        int num2=(n*(n+1)/2)+(n-i)*(n-i+1)/2+1;
        for(int j=1;j<=2*(n-i+1);j++) {
            if(j<=(n-i+1)) {
                cout<<num<<0;
                num++;
            }
            else {
                if(j!=2*(n-i+1)) {
                    cout<<num2<<0;
                }
                else {
                    cout<<num2;
                }
                num2++;
            }
        }
        cout<<endl;
    }
}

int main() 
{ 
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
	    printPattern(n);
    }

	return 0; 
} 
