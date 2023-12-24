#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s;
    cin >> s;
    int ans = 1;
    for (int i = 2; i <= (int)s.size(); i++) {
        for (int j = 0; j <= (int)s.size() - i; j++) {
            bool ok = true;
            for (int k = 0; k < i; k++) {
                if (s[j + k] != s[j + i - k - 1]) ok = false;
            }
            if (ok) ans = max(ans, i);
        }
    }
    cout << ans << endl;
    
    
    return 0;
}