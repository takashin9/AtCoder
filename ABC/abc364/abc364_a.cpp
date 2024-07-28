#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == s[i + 1] and s[i] == "sweet") {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    
    
    return 0;
}
