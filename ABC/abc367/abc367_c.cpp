#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;




int main() {
    int n, k; cin >> n >> k;
    vector<int> r(n);
    for (int i = 0; i < n; i++) cin >> r[i];

    auto dfs = [&](auto dfs, vector<int> &a) -> void {
        if (a.size() == n) {
            int sum = 0;
            for (int i = 0; i < n; i++) sum += a[i];
            if (sum % k != 0) return;
            for (int i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
            return;
        }
        for (int i = 0; i < r[a.size()]; i++) {
            a.push_back(i + 1);
            dfs(dfs, a);
            a.pop_back();
        }
    };

    vector<int> a;
    dfs(dfs, a);
    return 0;
}
