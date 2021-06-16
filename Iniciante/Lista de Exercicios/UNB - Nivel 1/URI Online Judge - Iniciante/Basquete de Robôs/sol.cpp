
// author: glaucoacassioc
// created on: June 05, 2021 6:08 PM

// Problem: Basquete de Robôs
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2780
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
	int dist;
	cin >> dist;
	if (dist <= 800) {
		cout << 1 << endl;
	} else if (dist > 800 && dist <= 1400) {
		cout << 2 << endl;
	} else {
		cout << 3 << endl;
	}
}
