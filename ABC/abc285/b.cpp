#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    int n;
    string s;
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        bool m = false;
        for (int l = 0; l < n - i; l++) {
            if (s[l] == s[l + i]) {
                m = true;
                cout << l << endl;
                break;
            }
        }
        if (m) cout << n - i << endl;
    }
    
    return 0;
}