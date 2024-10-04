#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int in; cin >> in; in--;
            a[i].push_back(in);
        }
    }
    vector<int> e(n, -1);
    e[0] = a[0][0];
    for (int i = 0; i < n - 1; i++) {
        if (i + 1 > e[i]) e[i + 1] = a[i + 1][e[i]];
        else e[i + 1] = a[e[i]][i + 1];
    }
    cout << e[n - 1] + 1 << endl;
    
    
    return 0;
}
