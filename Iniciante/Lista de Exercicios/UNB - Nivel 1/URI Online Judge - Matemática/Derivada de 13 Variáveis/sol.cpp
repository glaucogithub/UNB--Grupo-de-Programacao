
// author: glaucoacassioc
// created on: June 05, 2021 6:09 PM

// Problem: Derivada de 13 Variáveis
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2956
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
	double p, t;
	cin >> p >> t;
	cout << fixed << setprecision(5) << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = " << (p * t) / 2.0 << ".\n";
}
