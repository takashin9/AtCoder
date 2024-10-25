#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s, t; cin >> s >> t;
    for (int i = 0; i < min(s.size(), t.size()); i++) {
        if (s[i] != t[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    if (s.size() != t.size()) {
        cout << min(s.size(), t.size()) + 1 << endl;
        return 0;
    }

    cout << 0 << endl;
    
    
    return 0;
}
