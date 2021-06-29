
// author: glaucoacassioc
// created on: June 29, 2021 3:12 PM

// Problem: Tipo de Combustível
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1134
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int a, g, d;

bool input_valid(int n) {
	if (n < 1 || n > 4) {
		return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	int n;
	while (cin >> n && n != 4) {
		if (!input_valid(n)) {
			continue;
		}
		if (n == 1) {
			a++;
		} else if (n == 2) {
			g++;
		} else {
			d++;
		}
	}
	cout << "MUITO OBRIGADO\nAlcool: " << a << "\nGasolina: " << g << "\nDiesel: " << d << '\n';
}
