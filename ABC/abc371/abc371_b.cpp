#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m);
    vector<char> b(m);
    for (int i = 0; i < m; i++) cin >> a[i] >> b[i];
    set<int> s;
    for (int i = 0; i < m; i++) {
        if (s.count(a[i])) cout << "No" << endl;
        else {
            if (b[i] == 'M') {
                cout << "Yes" << endl;
                s.insert(a[i]);
            } else cout << "No" << endl;
        }
    }

    
    
    return 0;
}
