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
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0) {
                if (j == 0) {
                    cout << a[i + 1][j];
                }
                else cout << a[i][j - 1];
            }
            else if (i == n - 1) {
                if (j == n - 1) cout << a[i - 1][j];
                else cout << a[i][j + 1];
            }
            else if (j == 0) cout << a[i + 1][j];
            else if (j == n - 1) cout << a[i - 1][j];
            else cout << a[i][j];
        }
        cout << endl;
    }
    
    
    return 0;
}