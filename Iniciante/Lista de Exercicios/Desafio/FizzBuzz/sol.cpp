/*

Escreva um programa que mostre os números de 0 a 100 e
coloque Fizz nos números múltiplos de 3 e Buzz nos múltiplos de 5,
caso ambos ocorram mostre FizzBuzz.

*/

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
	cout << 0 << '\n';
	for (int i = 1; i <= 100; i++) {
		// dbg(i, i % 3, i % 5);
		if (i % 3 == 0 and i % 5 == 0) {
			cout << i << " FizzBuzz" << '\n';
		} else if (i % 3 == 0) {
			cout << i << " Fizz" << '\n';
		} else if (i % 5 == 0) {
			cout << i << " Buzz" << '\n';
		} else {
			cout << i << '\n';
		}
	}
	cout << '\n';
}