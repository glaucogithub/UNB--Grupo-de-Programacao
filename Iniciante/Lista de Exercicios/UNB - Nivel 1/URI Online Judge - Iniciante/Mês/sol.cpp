
// author: glaucoacassioc
// created on: June 05, 2021 6:01 PM

// Problem: Mês
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1052
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
	short int mes;
	cin >> mes;
	if (mes == 1) {
		cout << "January";
	} else if (mes == 2) {
		cout << "February";
	} else if (mes == 3) {
		cout << "March";
	} else if (mes == 4) {
		cout << "April";
	} else if (mes == 5) {
		cout << "May";
	} else if (mes == 6) {
		cout << "June";
	} else if (mes == 7) {
		cout << "July";
	} else if (mes == 8) {
		cout << "August";
	} else if (mes == 9) {
		cout << "September";
	} else if (mes == 10) {
		cout << "October";
	} else if (mes == 11) {
		cout << "November";
	} else if (mes == 12) {
		cout << "December";
	}
	cout << '\n';
}
