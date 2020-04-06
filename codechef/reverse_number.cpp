#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;

int main() {
    int T;
    cin>>T;
    for(int i=1;T>=i;++i){
        int n;
        int rem, newN;
        cin>>n;
        while(n!=0){
            rem=n%10;
            newN=newN*10+rem;
            n/=10;
        }
        cout<<newN<<endl;
        newN=0;rem=0;
    }

    return 0;
}


