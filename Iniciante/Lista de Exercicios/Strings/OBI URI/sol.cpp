
// author: glaucoacassioc
// created on: July 03, 2021 12:25 PM

// Problem: OBI URI
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2062
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

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
	int n;
	string s;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s.size() == 3 && ((s.substr(0, 2) == "OB" && s[2] != 'I') || (s.substr(0, 2) == "UR" && s[2] != 'I'))) {
			if (i == n - 1) {
				cout << s[0] << s[1] << 'I';
			} else {
				cout << s[0] << s[1] << 'I' << " ";
			}
		} else {
			if (i == n - 1) {
				cout << s;
			} else {
				cout << s << " ";
			}
		}
	}
	cout << '\n';
}