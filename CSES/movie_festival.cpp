#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y, curr_end = 0, total = 0;
	vector<pair<int, int>> arr;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		arr.push_back(make_pair(y, x));
	}
	// sorting by ending times
	sort(arr.begin(), arr.end());
	for (auto ele : arr)
	{
		if (ele.second >= curr_end)
		{
			curr_end = ele.first;
			total++;
		}
	}
	cout << total<<endl;
	return 0;
}