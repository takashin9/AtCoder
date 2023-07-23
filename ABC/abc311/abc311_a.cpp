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
    bool a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') a = 1;
        if (s[i] == 'B') b = 1;
        if (s[i] == 'C') c = 1;
        if (a and b and c) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    
    
    return 0;
}