#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s, t; cin >> s >> t;
    int ss = abs(s[0] - s[1]), ts = abs(t[0] - t[1]);
    bool yes = false;
    if (ss + ts == 5) yes = true;
    if (ss == ts) yes = true;
    cout << (yes ? "Yes" : "No") << endl;
    
    return 0;
}