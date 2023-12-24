#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string n;
    cin >> n;
    bool ok = true;
    if (n.size() == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    for (int i = 0; i < (int)n.size() - 1; i++) {
        if (n[i] <= n[i + 1]) ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
    
    
    return 0;
}