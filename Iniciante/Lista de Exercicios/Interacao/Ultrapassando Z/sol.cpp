
// author: glaucoacassioc
// created on: June 29, 2021 3:12 PM

// Problem: Ultrapassando Z
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1150
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int x, z, cnt, ans;
bool not_trespassing = true;

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
	int x;
	cin >> x;
	while (not_trespassing) {
		cin >> z;
		if (z <= x) {       //so processa numeros maiores que z
			continue;
		}
		while (z > ans) { //enquanto o numero for maior que minha soma
			ans += x;    //incremento ela, passando pro proximo numero e aumento a quantidade de numeros na minha resposta
			x++, cnt++;
			not_trespassing = false;//quando sair desse laco é porque ultrapassou z
		}
	}
	cout << cnt << '\n';
}
