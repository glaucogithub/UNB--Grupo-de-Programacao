
// author: glaucoacassioc
// created on: June 12, 2021 5:29 PM

// Problem: B. Mike and palindrome
// URL: https://codeforces.com/group/G19ss2enIt/contest/332236/problem/B
// Time Limit: 2000 ms
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

string str;
int cnt;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	getline(cin, str);
	for (int i = 0; i < str.length() / 2; i++) {
		if (str[i] != str[str.length() - 1 - i]) {
			cnt++;
		}
	}
	if (cnt == 1) {
		cout << "YES" << '\n';
	} else if (not cnt && str.length() & 1) {
		cout << "YES" << '\n';
	} else {
		cout << "NO" << '\n';
	}
}
