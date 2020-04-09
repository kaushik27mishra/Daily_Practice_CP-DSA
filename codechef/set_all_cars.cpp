#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)

int main() {
    int T,i(0); //25 
    cin>>T;
    while(T--){
        int N,a;
        cin>>N; //10^5
        multiset<int,greater <int>> arr;
        fo(i,N) {
            cin>>a; //10^9
            arr.insert(a);
        }

        int count(0);
        long int sum(0); //max 10^14
        multiset <int, greater <int> > :: iterator itr; 
        for (itr = arr.begin(); itr != arr.end(); ++itr) {
            if( (*itr-count) >= 0 ) {
                sum+=(*itr-count);
            }
            ++count;
        } 

        cout<<sum<<endl;
        arr.clear();
    }
    
    return 0;
}


