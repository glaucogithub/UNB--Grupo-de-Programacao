
// author: glaucoacassioc
// created on: June 05, 2021 5:34 PM

// Problem: Lanche
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1038
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
	int cod;
	double item;
	vector<pair<int, double> > p = {{1, 4.00}, {2, 4.50}, {3, 5.00}, {4, 2.00}, {5, 1.50}};
	cin >> cod >> item;
	cout << fixed << setprecision(2) << "Total: R$ " << item * p[cod - 1].second << '\n';
}
