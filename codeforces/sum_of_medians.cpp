#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > arr(n * k);
    for (int i = 0; i < n * k; i++) {
        cin >> arr[i];
    }

    long long res = 0;
    for(int i=k*(ceil((float)n/2)-1);i<n*k;i+=((n/2)+1)) {
        res = res + (long long)arr[i];
    }

    cout << res << endl;
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