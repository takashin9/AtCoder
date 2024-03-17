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
    set<char> st;
    for (int i = 0; i < (int)s.size(); i++) {
        m[s[i]]++;
        st.insert(s[i]);
    }
    int num = 0;
    char ans = *begin(st);
    for (auto [key, val] : m) {
        if (num < val) {
            ans = key;
            num = val;
        }
    }
    cout << ans << endl;
    
    
    return 0;
}