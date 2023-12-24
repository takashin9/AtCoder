#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    string s;
    cin >> n >> s;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    vector<int> cnt(26);
    int m = 1;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            m += 1;
            cnt[s[i] - 'a'] = max(cnt[s[i] - 'a'], m);
        }
        else {
            cnt[s[i] - 'a'] = max(cnt[s[i] - 'a'], m);
            m = 1;
        }
    }
    cnt[s.back() - 'a'] = max(cnt[s.back() - 'a'], m);

    cout << accumulate(begin(cnt), end(cnt), 0) << endl;
    
    
    return 0;
}