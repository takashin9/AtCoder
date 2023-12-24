#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector<int> sum(n);
    for (int i = 0; i < n - 1; i++) {
        sum[i + 1] += sum[i];
        if (s[i] == s[i + 1]) sum[i + 1]++;
    }
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r; l--; r--;
        cout << sum[r] - sum[l] << endl;
    }
    
    return 0;
}