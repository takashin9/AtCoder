#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    vector<string> s(n);
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < (1 << n); i++) {
        if (__popcount(i) != k) continue;
        string cnt;
        for (int j = 0; j < n; j++) {
            if (i & j) {
                if (cnt.empty()) cnt = s[j];
                else {
                    set_intersection(begin(cnt), end(cnt), begin(s[j]), end(s[j]), back_inserter(cnt));
                }
            }
        }
        ans = max(ans, (int)cnt.size());
        
    }
    cout << ans << endl;

    return 0;
}
