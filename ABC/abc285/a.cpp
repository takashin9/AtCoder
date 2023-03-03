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
    if(b == 2*a or b == 2*a + 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}