#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (auto &x : s) cin >> x;
    sort(s.begin(), s.end());

    do {
        bool can = true;
        for (int i = 0; i < n-1; i++) {
            ll cnt = 0;
            for (int j = 0; j < m; j++) {
                if (s[i][j] == s[i+1][j]) cnt++;
            }
            if (cnt < m-1) can = false;
        }
        if (can) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));

    cout << "No" << endl;
    
    return 0;
}