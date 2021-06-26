
// author: glaucoacassioc
// created on: June 26, 2021 5:42 PM

// Problem: Número Primo
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1165
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	int tt;
	cin >> tt;
	while (tt--) {
		int a;
		cin >> a;
		cout << a << (isPrime(a) ? " eh primo" : " nao eh primo") << '\n';
	}
}
