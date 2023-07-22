#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int u = (t[0] - s[0] + 26) % 26;
    
    for (int i = 0; i < n; i++) {
        s[i] = (s[i] - 'a' + u) % 26 + 'a';
    }

    cout << (s == t ? "Yes" : "No") << endl;
    
    
    return 0;
}