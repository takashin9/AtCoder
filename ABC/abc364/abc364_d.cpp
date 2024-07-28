#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, q; cin >> n >> q;
    vector<int> a(n), b(q), k(q);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(begin(a), end(a));

    while (q--) {
        int b, k; cin >> b >> k;
        auto f = [&](int x) -> bool {
            auto itr1 = lower_bound(begin(a), end(a), b - x);
            auto itr2 = upper_bound(begin(a), end(a), b + x);
            return itr2 - itr1 >= k;
        };

        int ng = -1, ok = 2e8;
        while (abs(ng - ok) > 1) {
            int mid = (ng + ok) / 2;
            if (f(mid)) ok = mid;
            else ng = mid;
        }
        cout << ok << endl;
    }
    
    return 0;
}
