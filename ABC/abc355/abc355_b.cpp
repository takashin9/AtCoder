#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), c(n + m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        c[i + n] = b[i];
    }
    sort(begin(a), end(a));
    sort(begin(c), end(c));
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n + m - 1; j++) {
            if (a[i] == c[j] and a[i + 1] == c[j + 1]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    
    return 0;
}