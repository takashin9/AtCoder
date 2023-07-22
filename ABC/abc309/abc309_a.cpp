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

    if (b - a == 1) {
        if (a == 3 or a == 6) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    else cout << "No" << endl;


    
    
    return 0;
}