#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s; cin >> s;
    bool ok = true;
    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            ok = (s[i] <= 'Z' and s[i] >= 'A');
        }
        else ok = (s[i] <= 'z' and s[i] >= 'a');
        if (!ok) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    
    
    return 0;
}