#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string x; cin >> x;
    while (x.back() == '0') x.pop_back();
    while (x.back() == '.') x.pop_back();
    cout << x << endl;
    
    
    return 0;
}
