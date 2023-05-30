#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<double> a(n), b(n), c(m), d(m);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for (int i = 0; i < m; i++) cin >> c[i] >> d[i];
    cout << setprecision(15) << fixed;
    set<double> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s.insert(100*(a[i]+c[j])/(a[i]+b[i]+c[j]+d[j]));
        }
    }
    auto itr = s.end();
    for (int i = 0; i < k; i++) itr--;
    cout << *itr << endl;

    
    return 0;
}