#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;



int main() {
    vector c(3, vector<int>(3));
    vector<pair<int, int>> p;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[i][j];
            p.push_back({i, j});
        }
    }
    ll bs = 0;
    do {
        vector g(3, vector<bool>(3, false));
        for (int i = 0; i < 9; i++) {
            auto [u, v] = p[i];
            g[u][v] = true;
            for (int j = 0; j < 3; j++) {
                int cnt = 0;
                set<int> s;
                for (int k = 0; k < 3; k++) {
                    if (g[j][k]) {
                        cnt++;
                        s.insert(c[j][k]);
                    }
                }
                if (cnt == 2 and s.size() == 1) {
                    bs++;
                    goto end;
                }
            }
            for (int j = 0; j < 3; j++) {
                int cnt = 0;
                set<int> s;
                for (int k = 0; k < 3; k++) {
                    if (g[k][j]) {
                        cnt++;
                        s.insert(c[k][j]);
                    }
                }
                if (cnt == 2 and s.size() == 1) {
                    bs++;
                    goto end;
                }
            }
            {
                int cnt = 0;
                set<int> s;
                for (int k = 0; k < 3; k++) {
                    if (g[k][k]) {
                        cnt++;
                        s.insert(c[k][k]);
                    }
                }
                if (cnt == 2 and s.size() == 1) {
                    bs++;
                    goto end;
                }
            }
            {
                int cnt = 0;
                set<int> s;
                for (int k = 0; k < 3; k++) {
                    if (g[k][2-k]) {
                        cnt++;
                        s.insert(c[k][2-k]);
                    }
                }
                if (cnt == 2 and s.size() == 1) {
                    bs++;
                    goto end;
                }
            }
        }
        end:;
    } while (next_permutation(begin(p), end(p)));
    ll fact = 1;
    for (int i = 1; i < 10; i++) fact *= i;
    cout << setprecision(14) << fixed;
    cout << (fact - bs) / (double)fact << endl;
    
    
    
    return 0;
}