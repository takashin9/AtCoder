#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<tuple<int, int, int>> ac(n);
    for (int i = 0; i < n; i++) {
        cin >> get<0>(ac[i]) >> get<1>(ac[i]);
        get<2>(ac[i]) = i + 1;
    }
    sort(rbegin(ac), rend(ac));
    tuple<int, int, int> p = ac[0];
    vector<int> ans;
    ans.push_back(get<2>(ac[0]));
    for (int i = 1; i < n; i++) {
        if (!(get<0>(p) > get<0>(ac[i]) and get<1>(p) < get<1>(ac[i]))) {
            ans.push_back(get<2>(ac[i]));
            if (get<1>(p) > get<1>(ac[i])) p = ac[i];
        }
    }
    sort(begin(ans), end(ans));
    cout << ans.size() << endl;
    for (auto x : ans) cout << x << " ";
    cout << endl;
    
    return 0;
}