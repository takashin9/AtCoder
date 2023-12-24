#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    set<int> s;

    while(true) {
        if (s.count(a % b)) break;
        s.insert(a % b);
        a += a;
    }

    cout << (s.count(c) ? "YES" : "NO") << endl;
    
    
    return 0;
}