#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int a, b; cin >> a >> b;
    set<int> s = {1, 2, 3};
    s.erase(a);
    s.erase(b);
    if (s.size() == 1) cout << *s.begin() << endl;
    else cout << -1 << endl;
    
    
    return 0;
}