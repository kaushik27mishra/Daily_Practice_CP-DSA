#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, c0, c1, h;
    string binary;
    cin >> n >> c0 >> c1 >> h >> binary;
    int count0 = 0;
    for (int i = 0; i < n; i++) {
        if (binary[i] == '0')
            count0++;
    }

    long long sum = 0;
    if (c0 > (c1 + h))
        sum = (long long)n * c1 + count0 * h;
    else if (c1 > (c0 + h))
        sum = (long long)n * c0 + (n - count0) * h;
    else
        sum = (long long)count0 * c0 + (n - count0) * c1;
    cout << sum << endl;
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}