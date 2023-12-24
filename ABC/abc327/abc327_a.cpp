#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++) {
        if ((s[i] == 'a' and s[i + 1] == 'b') or (s[i] == 'b' and s[i + 1] == 'a')) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    
    
    return 0;
}