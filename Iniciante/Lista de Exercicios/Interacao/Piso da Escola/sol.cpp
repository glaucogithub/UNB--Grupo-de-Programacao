
// author: glaucoacassioc
// created on: June 19, 2021 10:31 AM

// Problem: Piso da Escola
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2786
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
	int l, c;
	cin >> l >> c;
	cout << (l * c) + (l - 1)*(c - 1) << '\n' << ((l - 1) + (c - 1)) * 2 << '\n';
}
