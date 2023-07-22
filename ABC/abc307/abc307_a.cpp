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
    vector<int> a(7*n);
    for (auto &x : a) cin >> x;
    int s = 0;
    for (int i = 0; i < 7*n; i++) {
        s += a[i];
        if (i % 7 == 6) {
            cout << s << " ";
            s = 0;
        }
    }
    cout << endl;
    
    
    return 0;
}