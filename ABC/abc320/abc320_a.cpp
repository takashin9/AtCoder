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
    cout << int(pow(a, b) + pow(b, a)) << endl;
    
    
    return 0;
}