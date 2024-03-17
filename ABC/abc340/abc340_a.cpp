#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int a, b, d; cin >> a >> b >> d;
    while (a != b) {
        cout << a << " ";
        a += d;
    }
    cout << b << endl;
    
    
    return 0;
}