
// author: glaucoacassioc
// created on: June 28, 2021 12:32 PM

// Problem: Par ou Ímpar
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1074
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
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] & 1 and v[i] < 0) {
			cout << "ODD NEGATIVE" << '\n';
		} else if (v[i] & 1 and v[i] > 0) {
			cout << "ODD POSITIVE" << '\n';
		} else if (v[i] % 2 == 0 and v[i] < 0) {
			cout << "EVEN NEGATIVE" << '\n';
		} else if (v[i] % 2 == 0 and v[i] > 0) {
			cout << "EVEN POSITIVE" << '\n';
		} else {
			cout << "NULL" << '\n';
		}
	}
}
