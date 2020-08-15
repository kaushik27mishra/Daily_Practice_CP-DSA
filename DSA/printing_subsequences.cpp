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

void printArr(vector<int> arr) {
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void printSubsequnce(vector<int> ip,vector<int> op) {
    if(ip.size()==0) {
        printArr(op);
        return;
    }

    vector<int> op1(op.begin(),op.end());
    vector<int> op2(op.begin(),op.end());

    op2.push_back(ip[0]);
    ip.erase(ip.begin());

    printSubsequnce(ip,op1);
    printSubsequnce(ip,op2);
    return;
}

int main() {
    
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> op;
    printSubsequnce(arr,op);
    return 0;
}