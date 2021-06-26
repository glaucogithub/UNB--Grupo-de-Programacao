
// author: glaucoacassioc
// created on: June 26, 2021 3:11 PM

// Problem: Várias Notas Com Validação
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1118
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int new_calc, cnt;
double nota, sum;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);x
#endif
	while (true) {
		cin >> nota;
		if (nota < 0.0 || nota > 10.0) {
			cout << "nota invalida" << '\n';
			continue;
		} else {
			sum += nota;
			cnt++;
			if (cnt == 2) {
				cout << fixed << setprecision(2) << "media = " << sum / 2.0 << '\n';
				sum = 0.0, cnt = 0;
				do {
					cout << "novo calculo (1-sim 2-nao)" << '\n';
					cin >> new_calc;
				} while (new_calc < 1 || new_calc > 2);
			}
		}
		if (new_calc == 2) {
			break;
		}
	}
}
