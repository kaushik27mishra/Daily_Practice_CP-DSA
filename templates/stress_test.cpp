#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define N 101
#define lli long long int 
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

long long int fastSolution(vector <int> &a) {

}

long long int correctSolution(vector <int> &a) {

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(true) {
        int n = rand()%10+2;
        cout<<n<<endl;
        vector<int>a;
        for(int i=0;i<n;++i) {
            a.push_back(rand()%10000);
        }
        for(int i=0;i<n;++i) {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        long long res1=correctSolution(a);
        long long res2=fastSolution(a);
        if(res1!=res2) {
            cout<<"Wrong Answer"<<res1<<" "<<res2<<endl;
        }
        else {
            cout<<"OK"<<endl;
        }
        
    }
    int T;
    cin>>T;
    while(T--) {

    }

    return 0;
}