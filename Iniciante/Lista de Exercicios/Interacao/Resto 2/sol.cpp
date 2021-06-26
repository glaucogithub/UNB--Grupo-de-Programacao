
// author: glaucoacassioc
// created on: June 26, 2021 2:08 PM

// Problem: Resto 2
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1075
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
	for (int i = 1; i <= 10000; i++) {
		if (i % n == 2) {
			cout << i << '\n';
		}
	}
}
