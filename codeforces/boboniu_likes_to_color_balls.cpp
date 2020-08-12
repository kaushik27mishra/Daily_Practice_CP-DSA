#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int main() {
    
    int T;
    cin>>T;
    while(T--) {
        int temp=0;
        int zeros=0;
        int count=0;
        for(int i=0;i<3;i++) {
            cin>>temp;
            if(temp==0)
                zeros++;
            if(temp%2!=0)
                count++;
        }

        int w;
        cin>>w;

        if(zeros>0) {
            if((count<=1 && w%2==0) || (count==0 && w%2==1))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else {
            if(w==0) {
                if(count==1 || count==0 || count==3)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else {
                if(w&1) {
                    if(count==1)
                        cout<<"NO"<<endl;
                    else
                        cout<<"YES"<<endl;
                }
                else {
                    if(count==2)
                        cout<<"NO"<<endl;
                    else
                        cout<<"YES"<<endl;
                }
            }
        }
    }

    return 0;
}