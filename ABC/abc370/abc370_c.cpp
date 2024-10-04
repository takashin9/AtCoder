#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s, t; cin >> s >> t;
    int n = size(s);
    vector<string> x;
    while (s != t) {
        bool change = false;
        for (int i = 0; i < n; i++) {
            if (s[i] > t[i]) {
                s[i] = t[i];
                x.push_back(s);
                change = true;
                break;
            }
        }
        if (change) continue;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != t[i]) {
                s[i] = t[i];
                x.push_back(s);
                break;
            }
        }
    }
    cout << x.size() << endl;
    for (auto str : x) cout << str << endl;
    
    
    return 0;
}
