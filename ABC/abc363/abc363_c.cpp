#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    set<string> st;
    sort(begin(s), end(s));
    do {
        if (st.count(s)) continue;
        else st.insert(s);
        bool ok = true;
        for (int i = 0; i <= n - k; i++) {
            bool rev = true;
            for (int j = 0; j < (k + 1) / 2; j++) {
                if (s[i + j] != s[i + k - 1 - j]) rev = false;
            }
            if (rev) ok = false;
        }
        if (ok) ans++;
    } while (next_permutation(begin(s), end(s)));
    
    
    cout << ans << endl;
    return 0;
}
