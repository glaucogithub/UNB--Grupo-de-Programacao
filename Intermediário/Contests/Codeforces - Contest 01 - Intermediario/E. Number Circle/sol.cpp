
// author: glaucoacassioc
// created on: June 19, 2021 4:01 PM

// Problem: E. Number Circle
// URL: https://codeforces.com/group/G19ss2enIt/contest/333176/problem/E
// Time Limit: 1000 ms
// Memory Limit: 256 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if (v[n - 1] < (v[n - 2] + v[n - 3])) {
		cout << "YES" << '\n';
		for (int i = 0; i < n - 3; i++) {
			cout << v[i] << " ";
		}
		cout << v[n - 3] << " " << v[n - 1] << " " << v[n - 2];
	} else {
		cout << "NO" << '\n';
	}
}
