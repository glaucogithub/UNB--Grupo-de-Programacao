
// author: glaucoacassioc
// created on: June 29, 2021 3:12 PM

// Problem: Quadrado e ao Cubo
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1143
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
	for (int i = 1; i <= n; ++i) {
		cout << i << " " << i * i << " " << i * i * i << '\n';
	}
}
