
// author: glaucoacassioc
// created on: June 08, 2021 12:41 AM

// Problem: Cédulas
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1018
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
	int nota;
	cin >> nota;
	vector<int> v = { 100, 50, 20, 10, 5, 2, 1 };
	for (int i = 0; i < (int)v.size(); ++i) {
		cout << nota / v[i] << " nota(s) de R$ " << v[i] << ",00" << endl;
		nota %= v[i];
	}
}
