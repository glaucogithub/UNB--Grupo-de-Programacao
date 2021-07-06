
// author: glaucoacassioc
// created on: July 04, 2021 7:31 PM

// Problem: Árvore de Natal
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1768
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int n, k;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	while (cin >> n) {
		k = n / 2;
		for (int i = 1; i <= n; i += 2) {
			for (int j = 0; j < k; j++)	{
				cout << " ";
			}
			for (int j = 0; j < i; j++)	{
				cout << "*";
			}
			k--;
			cout << '\n';
		}
		for (int i = 0; i < n / 2; i++) {
			cout << " ";
		}
		cout << "*\n";
		for (int j = 1; j < n / 2; j++)	{
			cout << " ";
		}
		cout << "***\n\n";
	}
}
