#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> p(n);
    for (auto &y : p) cin >> y;
    int c = x - h;
    for (int i = 0; i < n; i++) {
        if (p[i] >= c) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    
    
    return 0;
}