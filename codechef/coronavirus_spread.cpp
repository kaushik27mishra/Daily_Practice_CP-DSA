#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=1;i<=n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

int arr[9];

int main() {
    int T;
    cin>>T;
    vector<int> sub;
    int n;
    while(T--) {
        cin>>n;
        fo(i,n){
            cin>>arr[i];
        }

        sub.pb(arr[1]);
        int best=INT_MIN;
        int worst=INT_MAX;
        int length(0);
        fo(i,n-1) {
            if((arr[i+1]-arr[i])<=2) {
                sub.pb(arr[i+1]);
            }
            else {
                length=sub.size();
                best = max(best,length);
                worst= min(worst,length);
                sub.clear();
                sub.pb(arr[i+1]);
            }

        }

        length=sub.size();
        best = max(best,length);
        worst= min(worst,length);


        sub.clear();

        cout<<worst<<" "<<best<<endl;


    }

    return 0;
}