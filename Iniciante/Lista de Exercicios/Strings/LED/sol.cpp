
// author: glaucoacassioc
// created on: July 03, 2021 11:47 AM

// Problem: LED
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1168
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

string s;
int64_t sum;     //0  1  2  3  4  5  6  7  8  9
int n, leds[12] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	cin >> n;
	cin.ignore();
	while (n--) {
		cin >> s;
		sum = 0;
		for (size_t i = 0; i < s.length(); i++) {
			sum += leds[(s[i] - '0')];
			// dbg(sum, s[i] - '0', leds[(s[i] - '0')]);
		}
		cout << sum << " leds" << '\n';
	}
}
