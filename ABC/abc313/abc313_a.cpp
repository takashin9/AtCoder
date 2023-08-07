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
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] >= m) m = a[i] + 1;
    }
    cout << m - a[0] << endl;
    
    
    return 0;
}