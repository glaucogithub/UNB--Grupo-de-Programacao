
// author: glaucoacassioc
// created on: July 03, 2021 12:26 PM

// Problem: Mensagem Oculta
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1272
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
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
#endif
	char texto[52], resultado[52], lixo;
	unsigned short i, j;
	unsigned casos;

	scanf("%u", &casos);
	getchar();
	while (casos--) {
		scanf("%[^\n]", texto);
		scanf("%c", &lixo); // Trata o buffer do scanf anteior;
		i = 0;
		j = 0;
		// laço dura até que o caractere nulo seja alcançado;
		while (texto[i]) {
			// se o caractere no índice atual for um espaço, simplesmente avanço...
			if (texto[i] == ' ') {
				i++;
			} else {
				// caso contrário, será uma letra
				// então coloco essa letra na string resultado;
				resultado[j++] = texto[i++];
				// enquanto os próximos caracteres também forem letras, apenas avanço,
				// dessa forma, quando encontrar um espaço, cairá no primeiro 'if' e avançará os espaços
				// até encontrar uma letra;
				while (isalpha(texto[i])) {
					i++;
				}
			}
		}
		// Grava o caractere nulo ao final da string para marcar o seu final;
		resultado[j] = '\0';
		printf("%s\n", resultado);
	}
}
