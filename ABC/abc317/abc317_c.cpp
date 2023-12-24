#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m;
    cin >> n >> m;
    vector g(n + 1, vector<ll>(n + 1, - 1));
    for (ll i = 0; i < m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        g[a][b] = c;
        g[b][a] = c;
    }
    vector<ll> d(n);
    iota(begin(d), end(d), 1);
    ll ans = 0;
    do {
        ll sum = 0;
        for (ll i = 0; i < n - 1; i++) {
            if (g[d[i]][d[i + 1]] != -1) sum += g[d[i]][d[i + 1]];
            else break;
        }
        ans = max(ans, sum);
    } while (next_permutation(begin(d), end(d)));
    cout << ans << endl;
    
    
    return 0;
}