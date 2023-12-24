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
    for (int i = 0; i <= n; i++) {
        bool ok = false;
        for (int j = 1; j < 10; j++) {
            if (n % j == 0 and i % (n / j) == 0) {
                cout << j;
                ok = true;
                break;
            }
        }
        if (!ok) cout << '-';
    }
    cout << endl;
    
    
    return 0;
}