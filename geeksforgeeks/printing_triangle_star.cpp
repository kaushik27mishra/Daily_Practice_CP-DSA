//using a single loop
#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    int i,k,flag=1;
    for(int i=0,k=0;i<=2*n-1;i++) {
        if(i<n-k) {
            cout<<" ";
        }
        else {
            if(flag)
                cout<<"*";
            else
                cout<<" ";
            flag=1-flag;
        }

        if(i==n+k) {
            k++;
            cout<<endl;

            if(i==2*n-1)
                break;
            i = 0;
            flag = 1;
        }
    }
}

int main() {
    int n;
    cin>>n;
    pattern(n);
}