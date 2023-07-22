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

    for (int i = (int)s.size() - 1; i >= 0; i--) {
        if (s[i] == 'a') {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    
    return 0;
}