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
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] == 'C') {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    
    return 0;
}