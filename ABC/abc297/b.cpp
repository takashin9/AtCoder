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
    int b1, b2, r1, r2, k;
    for (int i = 0; i < 8; i++) {
        if (s[i] == 'B') b2 = i;
        if (s[i] == 'R') r2 = i;
        if (s[i] == 'K') k = i;
    }
    for (int i = 7; i >= 0; i--) {
        if (s[i] == 'B') b1 = i;
        if (s[i] == 'R') r1 = i;
    }
    if (b1 % 2 != b2 % 2 and r1 < k and k < r2) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    
    return 0;
}