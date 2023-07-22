#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (auto &x : s) cin >> x;
    int li = 0, lj = 0, ri = 0, rj = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') {
                li = i;
                lj = j;
                i = h;
                j = w;
            }
            else {
                if (i + 1 < h and s[i+1][j] == '#') {
                    if (j + 1 < w and s[i][j+1] == '#') {
                        li = i;
                        lj = j;
                        i = h;
                        j = w;
                    }
                }
            }
        }
    }
    for (int i = h-1; i >= 0; i--) {
        for (int j = w-1; j >= 0; j--) {
            if (s[i][j] == '#') {
                ri = i;
                rj = j;
                i = -1;
                j = -1;
            }
            else {
                if (i - 1 >= 0 and s[i-1][j] == '#') {
                    if (j - 1 >= 0 and s[i][j-1] == '#') {
                        ri = i;
                        rj = j;
                        i = -1;
                        j = -1;
                    }
                }
            }
        }
    }
    for (int i = li; i <= ri; i++) {
        for (int j = lj; j <= rj; j++) {
            if (s[i][j] == '.') {
                cout << i+1 << ' ' << j+1 << endl;
                return 0;
            }
        }
    }
    
    
    return 0;
}