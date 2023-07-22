#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(n), c(n);
    vector<vector<int>> f(n, vector<int>(m));
    vector<set<int>> fs(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> c[i];
        for (int j = 0; j < c[i]; j++) {
            cin >> f[i][j];
            fs[i].insert(f[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (p[i] < p[j]) continue;
            bool has = true;
            for (auto x : fs[i]) {
                if (!fs[j].count(x)) has = false;
            }
            if (!has) continue;
            if (p[i] > p[j] or fs[j].size() > fs[i].size()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    
    
    return 0;
}