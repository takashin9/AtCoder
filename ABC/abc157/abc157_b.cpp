#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> a[i][j];
    }
    int n;
    cin >> n;
    int b[n];
    for (auto &x : b) cin >> x;
    for (auto &x : b) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (a[i][j] == x) {
                    a[i][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    int chk = 0;
                    for (int k = 0; k < 3; k++) {
                        int ix = i + k*x;
                        int jy = j + k*y;
                        if (ix >= 0 and ix < 3 and jy >= 0 and jy < 3) {
                            if (a[ix][jy] == 0) chk++;
                        }
                    }
                    if (chk == 3) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    
    
    return 0;
}