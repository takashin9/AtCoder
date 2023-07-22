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
    int ans = 0, m = 100;

    for (int i = 0; i <= 100; i += 5) {
        if (m > abs(n - i)) {
            m = abs(n - i);
            ans = i;
        }
    }
    cout << ans << endl;
    
    
    return 0;
}