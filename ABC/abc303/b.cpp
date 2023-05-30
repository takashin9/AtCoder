#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n)), p(n, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n-1; j++) {
            p[a[i][j]][a[i][j+1]]++;
            p[a[i][j+1]][a[i][j]]++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (!p[i][j] and i < j) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    
    return 0;
}