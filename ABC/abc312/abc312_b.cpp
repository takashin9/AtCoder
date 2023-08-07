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
    vector<string> s(n), t = {
        "###.?????",
        "###.?????",
        "###.?????",
        "....?????",
        "?????????",
        "?????....",
        "?????.###",
        "?????.###",
        "?????.###"
    };
    for (int i = 0; i < n; i++) cin >> s[i];
    set<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i + 9 > n or j + 9 > m) continue;
            bool ok = true;
            for (int k = i; k < i + 9; k++) {
                for (int l = j; l < j + 9; l++) {
                    if (t[k - i][l - j] == '#' and !(s[k][l] == '#')) ok = false;
                    if (t[k - i][l - j] == '.' and !(s[k][l] == '.')) ok = false;
                }
            }
            if (ok) ans.insert({i + 1, j + 1});
        }
    }
    for (auto [x, y] : ans) cout << x << " " << y << endl; 

    
    
    return 0;
}