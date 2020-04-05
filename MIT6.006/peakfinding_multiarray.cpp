//greedy ascent algotrithm
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define wt while(true)

template<typename... T>
void read(T&... args) {
    ((cin>>args), ...);
}

template<typename... T>
void write(T&&... args) {
    ((cout<<args<<" "), ...);
}

int peakfinding(vector<vector <int> > &v) {
    int a=v.size(),b=v[0].size();
    int x(b/2), y(a/2);
    wt{
        if((x>=0 && y>=0) && (v[x][y] < v[x][y+1]) ) {
            ++y;
        }
        else if( (x>=0 && y>=0) && (v[x][y] < v[x][y-1]) ) {
            --y;
        }

    }
}

int main() {
    int n,m,i(0),j(0); 
    read(n,m);
    // deb(n);
    // deb(m);
    vector< vector <int> > arr(n,vector <int> (m,0));

    fo(i,n)
        fo(j,m)
            cin>>arr[i][j];

    cout<<peakfinding(arr);

    return 0;
}


