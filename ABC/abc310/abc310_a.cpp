#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> d(n);
    for (auto &x : d) cin >> x;

    cout << min(p, q + *min_element(d.begin(), d.end())) << endl;
    
    
    return 0;
}