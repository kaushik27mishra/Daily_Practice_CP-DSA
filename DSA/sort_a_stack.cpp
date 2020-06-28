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

void insert(stack<int> &s,int value) {

    if(s.size()==0) {
        s.push(value);
        return;
    }
    
    if(s.top()<=value) {
        s.push(value);
        return;
    }
    else {
        int temp=s.top();
        s.pop();
        insert(s,value);
        s.push(temp);
    }
}

void Sort(stack<int> &s) {
    if(s.size()==1) {
        return;
    }

    int temp=s.top();
    s.pop();
    Sort(s);

    insert(s,temp);
    return;
}

int main() {
    stack<int> s;
    s.push(8);
    s.push(5);
    s.push(10);
    s.push(2);
    s.push(12);

    Sort(s);

    while(s.size()!=0) {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}