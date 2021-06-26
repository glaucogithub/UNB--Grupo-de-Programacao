
// author: glaucoacassioc
// created on: June 26, 2021 12:37 PM

// Problem: Positivos e Média
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1064
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

double sum, cnt;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	vector<double> v(6);
	for (int i = 0; i < 6; i++) {
		cin >> v[i];
		if (v[i] > 0.0) {
			sum += v[i];
			cnt++;
		}
	}
	cout << cnt / 1 << fixed << setprecision(1) << " valores positivos" << '\n' << sum / cnt << '\n';
}
