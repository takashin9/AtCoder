#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int a, b;
    cin >> a >> b;
    if ((b-1) % (a-1) == 0) cout << (b-1)/(a-1) << endl;
    else cout << (b-1)/(a-1) + 1 << endl;
    
    
    return 0;
}