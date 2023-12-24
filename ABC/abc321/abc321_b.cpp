#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n - 1);
    for (auto &b : a) cin >> b;
    for (int i = 0; i <= 100; i++) {
        vector<int> b = a;
        b.push_back(i);
        if (x <= accumulate(begin(b), end(b), 0) - *max_element(begin(b), end(b)) - *min_element(begin(b), end(b))) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    
    return 0;
}