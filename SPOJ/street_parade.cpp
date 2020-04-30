#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<=n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

int main() {
    stack<int> o;
    stack<int> u;
    int n;
    cin>>n;
    bool flag=true;
    int count=1;
    int a;

    while(cin>>a && a!=0){
        if(count==a){
            o.push(a);
            count++;
        }
        else {
            u.push(a);
        }
    }

    while(!u.empty()) {
        if(u.top()==(o.top()+1)){
            int a = u.top();
            u.pop();
            o.push(a);
        }
        else{
            flag=false;
        }
    }

    if(flag) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    return 0;
}