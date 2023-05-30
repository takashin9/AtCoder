#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll h, w;
    cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) cin >> a[i][j];
    }
    vector<vector<char>> s(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (a[i][j] == 0) s[i][j] = '.';
            else s[i][j] = 'A' + a[i][j] - 1;
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << s[i][j];
        }
        cout << endl;
    }

    
    
    return 0;
}