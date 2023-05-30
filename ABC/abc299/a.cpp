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
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (flag) {
            if (s[i] == '|') {
                cout << "out" << endl;
                return 0;
            }
            if (s[i] == '*') {
                cout << "in" << endl;
                return 0;
            }
        }
        else if (s[i] == '|') flag = true;
    }
    
    
    return 0;
}