#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<pair<int, int>> st;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        st.insert(make_pair(x, y));
    }
    pair<int, int> p = {0, 0};
    for (auto t : s) {
        if (t == 'R') p.first++;
        if (t == 'L') p.first--;
        if (t == 'U') p.second++;
        if (t == 'D') p.second--;
        h--;
        if (h < 0) {
            cout << "No" << endl;
            return 0;
        }
        if (st.count(p) and h < k) {
            h = k;
            st.erase(p);
        } 
    }
    cout << "Yes" << endl;
    
    
    return 0;
}