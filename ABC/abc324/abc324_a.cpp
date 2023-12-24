#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    if (*max_element(begin(a), end(a)) == *min_element(begin(a), end(a))) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    
    return 0;
}