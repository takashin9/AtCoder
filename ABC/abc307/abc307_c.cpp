#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int Ha, Wa, Hb, Wb, Hx, Wx;
    cin >> Ha >> Wa;
    vector<string> a(Ha);
    for (auto &s : a) cin >> s;
    cin >> Hb >> Wb;
    vector<string> b(Hb);
    for (auto &s : b) cin >> s;
    cin >> Hx >> Wx;
    vector<string> x(Hx);
    for (auto &s : x) cin >> s;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            for (int k = 0; k < 20; k++) {
                for (int l = 0; l < 20; l++) {
                    vector<vector<char>> y(30, vector<char>(30, '.'));
                    for (int ai = 0; ai < Ha; ai++) {
                        for (int aj = 0; aj < Wa; aj++) {
                            y[i+ai][j+aj] = a[ai][aj];
                        }
                    }
                    for (int bk = 0; bk < Ha; bk++) {
                        for (int bl = 0; bl < Wa; bl++) {
                            y[k+bk][l+bl] = a[bk][bl];
                        }
                    }
                    bool same = true;
                    for (int xi = 0; xi < Hx; xi++) {
                        for (int xj = 0; xj < Wx; xj++) {
                            if (x[xi][xj] != y[xi + 10][xj + 10]) same = false;
                        }
                    }

                    for (int u = 0; u < 30; u++) {
                        for (int v = 0; v < 30; v++) {
                            if (y[u][v] == '#') {
                                if (u < 10 or u >= 10 + Hx) {
                                    if (v < 10 or v >= 10 + Wx) same = false;
                                }
                            }
                        }
                    }
                    if (same) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    } 
    cout << "No" << endl;
    
    
    
    return 0;
}