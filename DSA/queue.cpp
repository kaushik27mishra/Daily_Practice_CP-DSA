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
#define F fornt
#define S second

int Queue[100];
int fornt=0;
int back=-1;

void push(int x) {
    ++back;
    Queue[back]=x;
}

void pop() {
    Queue[fornt]=0;
    fornt++;
}

bool isEmpty() {
    if (fornt>back) return true;
    else return false;
}


int top() {
    return Queue[fornt];
}

void add(int left,int right,int x) {
    for(left;right>=left;left++) {
        Queue[left]+=x;
    }
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        int a;
        fo(i,n) {
            cin>>a;
            push(a);
        }
        int q;
        cin>>q;
        int left,right,x;
        fo(i,q){
            cin>>left>>right>>x;
            add(left-1,right-1,x);
        }
        fo(i,n){
            
        }
    }

    return 0;
}