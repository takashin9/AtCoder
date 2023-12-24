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
    vector<int> d(n);
    for (int i = 0; i < n; i++) cin >> d[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {  
        string m = to_string(i + 1);
        for (int j = 1; j <= d[i]; j++) {
            string day = to_string(j);
            set<char> s;
            for (auto t : m) s.insert(t);
            for (auto t : day) s.insert(t);
            if (s.size() == 1) ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}