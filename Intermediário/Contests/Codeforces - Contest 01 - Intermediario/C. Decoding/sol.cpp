
// author: glaucoacassioc
// created on: June 19, 2021 4:01 PM

// Problem: C. Decoding
// URL: https://codeforces.com/group/G19ss2enIt/contest/333176/problem/C
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
	int n;
	string str_decoded, str_original;
	cin >> n >> str_original;
	int i = 0;
	while (n) {
		if ((n % 2) & 1) {
			str_decoded += str_original[i];
		} else {
			str_decoded = str_original[i] + str_decoded;
		}
		n -= 1;
		i += 1;
	}
	cout << str_decoded << '\n';
}
