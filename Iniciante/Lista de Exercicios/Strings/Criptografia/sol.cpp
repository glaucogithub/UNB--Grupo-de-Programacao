
// author: glaucoacassioc
// created on: July 14, 2021 2:33 AM

// Problem: Criptografia
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1024
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
#endif
	int tt;
	cin >> tt;
	cin.ignore();
	while (tt--) {
		string str;
		int d;
		cin >> str >> d;
		for (int i = str.length(); i >= 0; --i) {
			str[i] = (str[i] - 'A' - d + 26) % 26 + 'A';
		}
		cout << str << endl;
	}
}
