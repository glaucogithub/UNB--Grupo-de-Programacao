
// author: glaucoacassioc
// created on: June 19, 2021 4:01 PM

// Problem: A. Hotelier
// URL: https://codeforces.com/group/G19ss2enIt/contest/333176/problem/A
// Time Limit: 1000 ms
// Memory Limit: 256 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	int t, arr[10] = {0};
	string s;
	cin >> t >> s;
	int esq = 0, dir = 9;
	for (int i = 0; i < t; i++) {
		if (s[i] == 'L') {
			while (arr[esq]) esq++;
			arr[esq] = 1;
		} else if (s[i] == 'R') {
			while (arr[dir]) dir--;
			arr[dir] = 1;
		} else {
			int x = s[i] - '0';
			arr[x] = 0;
			esq = min(esq, x);
			dir = max(dir, x);
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	cout << '\n';
}
