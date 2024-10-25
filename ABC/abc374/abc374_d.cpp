#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, s, t; cin >> n >> s >> t;
    vector<int> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    vector<int> p(n);
    iota(begin(p), end(p), 0);
    double ans = 1e9;
    do {
        for (int i = 0; i < (1 << n); i++) {
            int x = 0, y = 0;
            double cnt = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    cnt += sqrt((a[p[j]] - x) * (a[p[j]] - x) + (b[p[j]] - y) * (b[p[j]] - y)) / s;
                    cnt += sqrt((a[p[j]] - c[p[j]]) * (a[p[j]] - c[p[j]]) + (b[p[j]] - d[p[j]]) * (b[p[j]] - d[p[j]])) / t;
                    x = c[p[j]], y = d[p[j]];
                } else {
                    cnt += sqrt((c[p[j]] - x) * (c[p[j]] - x) + (d[p[j]] - y) * (d[p[j]] - y)) / s;
                    cnt += sqrt((a[p[j]] - c[p[j]]) * (a[p[j]] - c[p[j]]) + (b[p[j]] - d[p[j]]) * (b[p[j]] - d[p[j]])) / t;
                    x = a[p[j]], y = b[p[j]];
                }
            }
            ans = min(ans, cnt);
        }
    } while (next_permutation(begin(p), end(p)));

    cout << setprecision(14) << fixed;
    cout << ans << endl;
    return 0;
}
