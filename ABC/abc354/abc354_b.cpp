#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n; cin >> n;
    vector<string> s(n);
    vector<int> c(n);
    set<string> st;
    int t = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> c[i];
        t += c[i];
        st.insert(s[i]);
    }
    t %= n;
    auto itr = begin(st);
    for (int i = 0; i < t; i++) {
        itr++;
    }
    cout << *itr << endl;

    
    
    return 0;
}