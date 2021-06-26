
// author: glaucoacassioc
// created on: June 26, 2021 12:27 PM

// Problem: Sort Simples
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1042
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> v = {a, b, c};
	sort(v.begin(), v.end());
	for (const auto &s : v) {
		cout << s << '\n';
	}
	cout << '\n';
	cout << a << '\n' << b << '\n' << c << '\n';
}
