#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == '#' and s[i + 1] == '.' and s[i + 2] == '#') ans++;
    }
    cout << ans << endl;
    
    
    
    return 0;
}
