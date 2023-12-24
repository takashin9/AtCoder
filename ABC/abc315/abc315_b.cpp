#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int m;
    cin >> m;
    vector<int> d(m);
    int tr = 0;
    for (auto &x : d) {
        cin >> x;
        tr += x;
    }
    tr = (tr + 1) / 2;
    for (int i = 0; i < m; i++) {
        if (tr > d[i]) tr -= d[i];
        else {
            cout << i + 1 << " " << tr << endl;
            return 0;
        }
    }

    
    
    return 0;
}