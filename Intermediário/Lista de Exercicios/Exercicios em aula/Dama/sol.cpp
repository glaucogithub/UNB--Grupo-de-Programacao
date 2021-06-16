
// author: glaucoacassioc
// created on: June 12, 2021 5:33 PM

// Problem: Dama
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1087
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
	int x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2 && (x1 + y1 + x2 + y2)) {
		if (x1 == x2 && y1 == y2) { // esta no mesmo lugar
			cout << 0 << '\n';
		} else if ((x1 + y1) == (x2 + y2) || (x1 - y1) == (x2 - y2) || (x1 == x2 || y1 == y2) || (x1 == y1 && x2 == y2)) { // diagonais
			cout << 1 << '\n';
		} else {
			cout << 2 << '\n';
		}
	}
}
