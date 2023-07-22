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
    vector<int> x(n);
    for (auto &y : x) cin >> y;
    sort(x.begin(), x.end());

    int m = 1e9;
    for (int i = x[0]; i <= x[n-1]; i++) {
        int sq = 0;
        for (int j = 0; j < n; j++) {
            sq += pow(x[j] - i, 2);
        }
        m = min(m, sq);
    }
    cout << m << endl;
    
    
    return 0;
}