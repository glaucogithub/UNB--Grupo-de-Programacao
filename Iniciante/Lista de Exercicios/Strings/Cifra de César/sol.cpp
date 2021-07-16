
// author: glaucoacassioc
// created on: July 14, 2021 2:36 AM

// Problem: Cifra de César
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1253
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
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		string str;
		getline(cin, str);
		for (int i = (int)str.size(); i >= 0; --i) {
			if (isalpha(str[i])) {
				str[i] += 3;
			}
		}
		reverse(str.begin(), str.end());
		for (int j = (int)str.size() / 2; j < (int)str.size(); j++) {
			str[j]--;
		}
		cout << str << endl;
	}
}
