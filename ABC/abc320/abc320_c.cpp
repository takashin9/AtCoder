#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int m;
    vector<string> s(3);
    cin >> m >> s[0] >> s[1] >> s[2];
    int ans = 3 * m;
    bool e = false;
    for (int i = 0; i < 3 * m; i++) {
        for (int j = 0; j < 3 * m; j++) {
            for (int k = 0; k < 3 * m; k++) {
                if (i != j and j != k and k != i) {
                    if (s[0][i % m] == s[1][j % m] and s[1][j % m] == s[2][k % m]) {
                        ans = min(ans, max({i, j, k}));
                        e = true;
                    }
                }
            }
        }
    }
    cout << (e ? ans : -1) << endl;
    
    
    
    return 0;
}