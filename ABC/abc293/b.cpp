#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    set<ll> s;
    for (int i = 1; i <= n; i++) s.insert(i);
    for (int i = 1; i <= n; i++) {
        if (s.count(i)) {
            s.erase(a[i-1]);
        }
    }
    cout << s.size() << endl;
    for (auto x : s) cout << x << ' ';
    cout << endl;

    
    return 0;
}