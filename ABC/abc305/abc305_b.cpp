#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    char p, q;
    cin >> p >> q;
    int d[7] = {0, 3, 4, 8, 9, 14, 23};
    if (p > q) swap(p, q);
    cout << d[(int)(q - 'A')] - d[(int)(p - 'A')] << endl;
    
    
    return 0;
}