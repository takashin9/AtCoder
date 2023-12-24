#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    bool f = true, b = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            f = false;
        }
        if (s[i] != t[m - n + i]) {
            b = false;
        }
    }

    if (f and b) cout << 0 << endl;
    else if (f and !b) cout << 1 << endl;
    else if (!f and b) cout << 2 << endl;
    else if (!f and !b) cout << 3 << endl;


    
    
    return 0;
}