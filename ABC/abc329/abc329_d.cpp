#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    map<int, int> mp;
    mp[a[0]]++;
    cout << a[0] << endl;
    pair<int, int> p = {a[0], 1};
    for (int i = 1; i < m; i++) {
        mp[a[i]]++;
        if (mp[a[i]] > p.second) {
            cout << a[i] << endl;
            p = {a[i], mp[a[i]]};
        }
        else if (mp[a[i]] == p.second) {
            if (a[i] < p.first) {
                cout << a[i] << endl;
                p = {a[i], mp[a[i]]};
            }
            else {
                cout << p.first << endl;
            }
        }
        else cout << p.first << endl;
    }
    
    return 0;
}