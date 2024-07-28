#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s; cin >> s;
    map<char, int> m;
    for (auto c : s) m[c]++;
    for (int i = 0; i < s.size(); i++) {
        if (m.begin()->first == s[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    
    
    
    return 0;
}
