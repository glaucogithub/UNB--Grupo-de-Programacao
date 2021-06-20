
// author: glaucoacassioc
// created on: June 19, 2021 4:01 PM

// Problem: B. Changing Volume
// URL: https://codeforces.com/group/G19ss2enIt/contest/333176/problem/B
// Time Limit: 1000 ms
// Memory Limit: 256 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void diferenca(int d) {
	int res = 0;
	if (d >= 5) {
		res += d / 5;
		d = d - ((d / 5) * 5);
	}
	if (d >= 2) {
		res += d / 2;
		d = d - ((d / 2) * 2);
	}
	if (d >= 1) {
		res += d;
	}
	cout << res << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, dif;
		cin >> a >> b;
		dif = b - a;
		if (a == b) {
			cout << 0 << '\n';
			continue;
		} else if (a < b) {
			diferenca(dif);
		} else {
			diferenca(dif * -1);
		}
	}
}
