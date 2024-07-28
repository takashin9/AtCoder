#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;
using ull = unsigned long long;

ull ullpow(ull n, ull m) {
    ull ret = 1;
    for (int i = 0; i < m; i++) {
        ret *= n;
    }
    return ret;
}


int main() {
    ull n; cin >> n;
    if (n <= 10) {
        cout << n - 1 << endl;
        return 0;
    }
    else if (n <= 19) {
        cout << (n - 10) * 11 << endl;
        return 0;
    }
    ull p = 3;
    ull m = 19;
    for (;; p++) {
        m += 9 * ullpow(10, (p - 1) / 2);
        if (m >= n) {
            m -= 9 * ullpow(10, (p - 1) / 2);
            break;
        }
    }
    ull cnt = n - m;
    string s = "";
    for (int i = (p - 1) / 2; i >= 0; i--) {
        if (i == (p - 1) / 2) {
            s += (char)('1' + (cnt - 1) / ullpow(10, i));
            continue;
        }
        s += (char)('0' + ((cnt - 1) / ullpow(10, i) % 10));
    }
    if (p % 2 == 0) {
        cout << s;
        reverse(begin(s), end(s));
        cout << s << endl;
    } else {
        cout << s;
        s.pop_back();
        reverse(begin(s), end(s));
        cout << s << endl;
    }

    
    
    
    return 0;
}
