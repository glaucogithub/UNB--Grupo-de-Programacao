// author: glaucoacassioc
// created on: June 29, 2021 3:12 PM

// Problem: Somando Inteiros Consecutivos
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1149
// Time Limit: 1000 ms
// Memory Limit: 1024 MB

#include <bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int64_t a, n, sum;
bool can_sum = true;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
#endif
    cin >> a;
    while (can_sum) {
        cin >> n;
        if (n <= 0) {
            continue;
        } else {
            sum = 0;
            for (int i = 0; i < n; i++) {
                sum += (a + i);
            }
            can_sum = false;
        }
    }
    cout << sum << '\n';
}
