#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n;
    string s;
    
    cin >> n >> s;
    for (int i = 0; i < n-1; i++) {
        if ((s[i] == 'M' and s[i+1] == 'M') or (s[i] == 'F' and s[i+1] == 'F')) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}