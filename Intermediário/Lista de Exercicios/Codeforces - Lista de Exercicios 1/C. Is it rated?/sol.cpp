
// author: glaucoacassioc
// created on: June 12, 2021 5:29 PM

// Problem: C. Is it rated?
// URL: https://codeforces.com/group/G19ss2enIt/contest/332236/problem/C
// Time Limit: 2000 ms
// Memory Limit: 256 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int n, score;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	cin >> n;
	vector<pair<int, int> > v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.emplace_back(make_pair(a, b));
	}
	for (int j = 0; j < n; j++) {
		if (v[j].first != v[j].second) {
			score++;
		} else if (v[j].first == v[j].second) {
			continue;
		}
	}
	if (score) {
		cout << "rated" << '\n';
	} else if (!score && is_sorted(v.rbegin(), v.rend())) {
		cout << "maybe" << '\n';
	} else {
		cout << "unrated" << '\n';
	}
}
