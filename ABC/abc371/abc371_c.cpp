#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    int mg, mh;
    cin >> mg;
    vector<pair<int, int>> uv(mg);
    for (int i = 0; i < mg; i++) {
        int u, v; cin >> u >> v;
        u--, v--;
        uv[i] = {u, v};
    }
    cin >> mh;
    vector<pair<int, int>> ab(mh);
    for (int i = 0; i < mh; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        ab[i] = {a, b};
    }

    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            cin >> a[i][j];
            a[j][i] = a[i][j];
        }
    }

    vector<int> p(n);
    iota(begin(p), end(p), 0);

    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }

    int ans = 1e9;

    do {
        auto abc = ab;

        for (int i = 0; i < mh; i++) {
            if (p[abc[i].first] < p[abc[i].second]) {
                abc[i].first = p[abc[i].first];
                abc[i].second = p[abc[i].second];
            } else {
                int tmp = abc[i].first;
                abc[i].first = p[abc[i].second];
                abc[i].second = p[tmp];
            }
        }
        set<pair<int, int>> s;
        int cnt = 0;
        for (int i = 0; i < mg; i++) {
            bool e = false;
            for (int j = 0; j < mh; j++) {
                if (uv[i] == abc[j]) e = true;
            }
            if (!e and !s.count(uv[i])) {
                cnt += a[uv[i].first][uv[i].second];
                s.insert(uv[i]);
            }
        }
        for (int i = 0; i < mh; i++) {
            bool e = false;
            for (int j = 0; j < mg; j++) {
                if (abc[i] == uv[j]) e = true;
            }
            if (!e and !s.count(abc[i])) {
                cnt += a[abc[i].first][abc[i].second];
                s.insert(abc[i]);
            }
        }

        ans = min(ans, cnt);
    } while (next_permutation(begin(p), end(p)));
    cout << ans << endl;

    return 0;
}
