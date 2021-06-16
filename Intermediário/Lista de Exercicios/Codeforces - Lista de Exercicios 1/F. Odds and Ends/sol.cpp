
// author: glaucoacassioc
// created on: June 12, 2021 5:29 PM

// Problem: F. Odds and Ends
// URL: https://codeforces.com/group/G19ss2enIt/contest/332236/problem/F
// Time Limit: 1000 ms
// Memory Limit: 256 MB

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
	cin >> n;
	vector<int> v;
	bool ok = false;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.emplace_back(x);
	}
	for (int j = 0; j < n; j++) {
		if (v[0] & 1 && v.back() & 1) {
			ok = true;
			break;
		}
	}
	if (ok && (int)v.size() & 1) {
		cout << "Yes" << '\n';
	} else {
		cout << "No" << '\n';
	}
}