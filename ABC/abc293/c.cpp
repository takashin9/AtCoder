#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < (1 << (h + w - 1)); i++) {
        int cnt = 0;
        for (int j = 0; j < h + w - 1; j++) {
            if (i & (1 << j)) cnt++;
        }
        if (cnt == h - 1) {
            pair<int, int> p = {0, 0};
            set<int> st;
            st.insert(a[0][0]);
            for (int j = 0; j < h + w - 1; j++) {
                if (i & (1 << j)) {
                    p.first++;
                    st.insert(a[p.first][p.second]);
                }
                else {
                    p.second++;
                    st.insert(a[p.first][p.second]);
                }
            }
            if (st.size() == h + w - 1) ans++;
        }
    }
    cout << ans << endl;

    
    return 0;
}