#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char S,char D,char H) {
    if(n==1) {
        cout<<"move plate "<<n<<" from "<<S<<" to "<<D<<endl;
        return;
    }
    towerOfHanoi(n-1,S,H,D);
    cout<<"move plate "<<n<<" from "<<S<<" to "<<D<<endl;
    towerOfHanoi(n-1,H,D,S);
    return;
}

int main() {
    int n;
    cin>>n;
    towerOfHanoi(n,'S','D','H');
    return 0;
}