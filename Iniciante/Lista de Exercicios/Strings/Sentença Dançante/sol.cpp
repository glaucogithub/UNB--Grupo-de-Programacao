
// author: glaucoacassioc
// created on: July 03, 2021 12:13 PM

// Problem: Sentença Dançante
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1234
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
	string str;
	char c;
	while (getline(cin, str)) {
		if (cin.eof()) {
			break;
		}
		int j = 0;
		for (size_t i = 0; i < str.length(); i++) {
			c = str[i];
			if (isalpha(c)) {
				if (j % 2 == 0) {
					c = toupper(str[i]);
				} else {
					c = tolower(str[i]);
				}
				j++;
			}
			cout << c;
		}
		cout << '\n';
	}
}
