#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    b = a;
    // for (int k = 0; k < n / 2; k++) {
    //     for (int i = k; i < n - k; i++) {
    //         for (int j = k; j < n - k; j++) {
    //             b[j][n - i - 1] = a[i][j];
    //         }
    //     }
    //     a = b;
    // }
    for (int k = 0; k < n / 2; k++) {
        int m = (k + 1) % 4;
        for (int r = 0; r < m; r++) {
            for (int i = k; i < n - k; i++) {
                b[k][n - i - 1] = a[i][k];
                b[n - k - 1][n - i - 1] = a[i][n - k - 1];
            }
            for (int j = k; j < n - k; j++) {
                b[j][n - k - 1] = a[k][j];
                b[j][k] = a[n - k - 1][j];
            }
            a = b;
        }
    }
    for (auto s : b) cout << s << endl;
    
    
    return 0;
}
