#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    vector<string> s(8);
    for (auto &t : s) cin >> t;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (s[i][j] == '*') {
                cout << (char)('a' + j) << 8-i << endl;
                return 0;
            }
        }
    }
    
    
    return 0;
}