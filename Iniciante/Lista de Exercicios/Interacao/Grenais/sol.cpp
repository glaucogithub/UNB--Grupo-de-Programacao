
// author: glaucoacassioc
// created on: June 26, 2021 5:40 PM

// Problem: Grenais
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1131
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int inter, gremio, rep, cnt, win_gremio, win_inter, empates;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	while (true) {
		cin >> inter >> gremio >> rep;
		cnt++;
		cout << "Novo grenal (1-sim 2-nao)" << '\n';
		if (inter > gremio) {
			win_inter++;
		} else if (inter < gremio) {
			win_gremio++;
		} else {
			empates++;
		}
		if (rep == 1) {
			continue;
		} else {
			cout << cnt << " grenais\n" << "Inter:" << win_inter << '\n' << "Gremio:" << win_gremio << '\n' << "Empates:" << empates << '\n';
			if (win_inter > win_gremio) {
				cout << "Inter venceu mais" << '\n';
			} else if (win_inter < win_gremio) {
				cout << "Gremio venceu mais" << '\n';
			} else {
				cout << "Nao houve vencedor" << '\n';
			}
			break;
		}
	}
}