
// author: glaucoacassioc
// created on: June 05, 2021 5:51 PM

// Problem: DDD
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1050
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
	int ddd;
	cin >> ddd;
	if (ddd == 61) {
		cout << "Brasilia";
	} else if (ddd == 71) {
		cout << "Salvador";
	} else if (ddd == 11) {
		cout << "Sao Paulo";
	} else if (ddd == 21) {
		cout << "Rio de Janeiro";
	} else if (ddd == 32) {
		cout << "Juiz de Fora";
	} else if (ddd == 19) {
		cout << "Campinas";
	} else if (ddd == 27) {
		cout << "Vitoria";
	} else if (ddd == 31) {
		cout << "Belo Horizonte";
	} else {
		cout << "DDD nao cadastrado";
	}
	cout << '\n';
}
