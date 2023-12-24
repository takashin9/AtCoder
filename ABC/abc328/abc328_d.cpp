#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s; cin >> s;
    int n = s.size();
    string t, ans;
    bool can = false;
    for (int i = 0; i < n; i++) {
        if (t.empty()) {
            if (s[i] == 'A') t += s[i];
            else ans += s[i];
        }
        else {
            if (t.back() == 'A') {
                if (s[i] == 'C') {
                    t += s[i];
                    ans += t;
                    t.clear();
                }
                else t += s[i];
            }
            else if (t.back() == 'B') {
                if (s[i] == 'A') t += s[i];
                else if (s[i] == 'B') {
                    t += s[i];
                    ans += t;
                    t.clear();
                }
                else {
                    t.pop_back();
                    t.pop_back();
                }
            }
        }
    }
    ans += t;
    cout << ans << endl;
    
    
    return 0;
}