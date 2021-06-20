// author: glaucoacassioc
// created on: June 19, 2021 4:01 PM

// Problem: D. Ksusha and Array
// URL: https://codeforces.com/group/G19ss2enIt/contest/333176/problem/D
// Time Limit: 2000 ms
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
	bool ok = true;
	for (int i = 1; i < n; i++) {
		if (v[i] % v[0]) {
			ok = false;
			break;
		}
	}
	cout << (ok ? v[0] : -1) << '\n';
}