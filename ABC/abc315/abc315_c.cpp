#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<pair<int, int>> sf(n);
    for (int i = 0; i < n; i++) {
        int f, s; cin >> f >> s;
        sf[i] = {s, f};
    }
    sort(rbegin(sf), rend(sf));
    set<int> s;
    int ans = sf[0].first;
    s.insert(sf[0].second);
    for (int i = 1; i < n; i++) {
        if (s.count(sf[i].second)) {
            ans = max(ans, sf[0].first + sf[i].first / 2);
        }
        else ans = max(ans, sf[0].first + sf[i].first);
    }
    cout << ans << endl;
    
    
    return 0;
}