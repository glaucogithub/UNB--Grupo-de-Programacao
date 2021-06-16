
// author: glaucoacassioc
// created on: June 05, 2021 5:47 PM

// Problem: Tempo de Jogo
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1046
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
	int ini, fim;
	cin >> ini >> fim;
	if (ini < fim) {
		cout << "O JOGO DUROU " << fim - ini << " HORA(S)" << '\n';
	} else {
		cout << "O JOGO DUROU " << 24 - ini + fim << " HORA(S)" << '\n';
	}
}
