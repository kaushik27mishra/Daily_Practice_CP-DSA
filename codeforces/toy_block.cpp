#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector < int > boxes(n);
    long long sum = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> boxes[i];
        mx=max(mx,boxes[i]);
        sum += boxes[i];
    }
    long long ans = 0;
    long long mid = 0;
    int l = mx, r = INT_MAX;
    while(l<=r) {
        mid = l+(r-l)/2;
        long long x = mid*(n-1) - sum;
        if(sum<0)
            l = mid + 1;
        else {
            r=mid - 1;
            ans = x;
        }
        
    }

   cout<<ans<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}