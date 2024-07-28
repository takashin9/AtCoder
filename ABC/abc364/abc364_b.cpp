#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int h, w; cin >> h >> w;
    int si, sj; cin >> si >> sj;
    si--; sj--;
    vector<string> c(h);
    for (int i = 0; i < h; i++) cin >> c[i];
    string x; cin >> x;
    for (auto ord : x) {
        if (ord == 'L') {
            if (sj - 1 >= 0 and c[si][sj - 1] == '.') {
                sj--;
            }
        }
        if (ord == 'R') {
            if (sj + 1 < w and c[si][sj + 1] == '.') {
                sj++;
            }
        }
        if (ord == 'U') {
            if (si - 1 >= 0 and c[si - 1][sj] == '.') {
                si--;
            }
        }
        if (ord == 'D') {
            if (si + 1 < h and c[si + 1][sj] == '.') {
                si++;
            }
        }
    }
    cout << si + 1 << " " << sj + 1 << endl;
    
    
    return 0;
}
