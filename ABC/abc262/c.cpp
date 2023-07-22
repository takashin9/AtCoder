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
    for (auto &x : a) {
        cin >> x;
        x--;
    }

    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        int j = a[i];
        if (i == j) cnt++;
        if (i == a[j] and i < j) ans++;
    }
    ans += (cnt*(cnt-1))/2;
    
    cout << ans << endl;
    
    return 0;
}