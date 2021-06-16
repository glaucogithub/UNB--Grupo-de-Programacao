
// author: glaucoacassioc
// created on: June 12, 2021 5:29 PM

// Problem: E. Strange Table
// URL: https://codeforces.com/group/G19ss2enIt/contest/332236/problem/E
// Time Limit: 2000 ms
// Memory Limit: 256 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int64_t tt, n, m, x;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template < typename T_container, typename T = typename enable_if < !is_same<T_container, string>::value, typename T_container::value_type >::type > ostream & operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifndef ACASSIO_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	/*

	Output 3:

	3 5 11

	1  2  3  4  5
	6  7  8  9  10
	11 12 13 14 15


	  | 0  1  2  3   4
	----------------------
	0 | 1  4  7  10  13
	1 | 2  5  8  11  14
	2 | 3  6  9  12  15


	coluna = (11 - 1) / 3 = 3
	 linha = (11 - 1) % 3 = 1

	5 * linha + (coluna + 1)
	5 * 1 + (3 + 1) = 9

	*/
	cin >> tt;
	while (tt--) {
		cin >> n >> m >> x;
		x--;
		cout << (x % n) * m + (x / n) + 1 << '\n';
	}
}
