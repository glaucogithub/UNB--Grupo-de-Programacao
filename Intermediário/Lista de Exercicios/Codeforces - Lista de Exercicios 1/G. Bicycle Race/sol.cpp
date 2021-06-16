
// author: glaucoacassioc
// created on: June 12, 2021 5:29 PM

// Problem: G. Bicycle Race
// URL: https://codeforces.com/group/G19ss2enIt/contest/332236/problem/G
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
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	vector<int> dir;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1] ) {
			if (b[i] < b[i + 1]) {
				// ↑
				dir.emplace_back(0);
			} else {
				// ↓
				dir.emplace_back(2);
			}
		} else {
			if (a[i] < a[i + 1]) {
				// ←
				dir.emplace_back(1);
			} else {
				// →
				dir.emplace_back(3);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < (int)dir.size(); i++) {
		int j = (i + 1) % (int)dir.size();
		if ((dir[j] + 1) % 4 == dir[i]) {
			ans++;
		}
	}
	cout << ans << '\n';
}
