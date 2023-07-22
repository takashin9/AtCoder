#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &x : s) cin >> x;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            string t = s[i] + s[j];
            bool rev = true;
            for (int k = 0; k < t.size()/2; k++) {
                if (t[k] != t[t.size() - 1 - k]) {
                    rev = false;
                }
            }
            if (rev) cnt++;
        }
    }
    cout << (cnt > 0 ? "Yes" : "No") << endl;
    
    
    return 0;
}