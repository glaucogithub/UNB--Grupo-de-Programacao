
// author: glaucoacassioc
// created on: June 12, 2021 5:29 PM

// Problem: A. Bear and Big Brother
// URL: https://codeforces.com/group/G19ss2enIt/contest/332236/problem/A
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
	int a, b, ans = 0;
	cin >> a >> b;
	while (a <= b) {
		a *= 3, b *= 2;
		ans++;
	}
	cout << ans << '\n';
}
