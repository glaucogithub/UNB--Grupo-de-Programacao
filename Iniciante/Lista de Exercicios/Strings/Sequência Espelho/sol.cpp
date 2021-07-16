
// author: glaucoacassioc
// created on: July 14, 2021 2:37 AM

// Problem: Sequência Espelho
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2157
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
#endif
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			cout << i;
		}
		for (int j = b; j >= a; --j) {
			int aux = j;
			while (aux) {
				int auxiliar = aux % 10;
				cout << auxiliar;
				aux = aux / 10;
			}
		}
		cout << '\n';
	}
}
