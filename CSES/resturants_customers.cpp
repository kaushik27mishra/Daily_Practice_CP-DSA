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
#define lb lower_bound
#define mp make_pair
#define ub upper_bound
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int main() {
  int n, x, y, s = 0;
  priority_queue<tuple<int, int>> q;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    q.push({-x, 1});
    q.push({-y, -1});
  }
  x = 0;
  while (!q.empty()) {
    x += get<1>(q.top());
    q.pop();
    s = max(s, x);
  }
  cout << s << "\n";
}
