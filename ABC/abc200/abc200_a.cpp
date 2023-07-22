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
    if (n % 100 == 0) {
        cout << n / 100 << endl;
        return 0;
    }
    cout << n / 100 + 1 << endl;
    
    
    return 0;
}