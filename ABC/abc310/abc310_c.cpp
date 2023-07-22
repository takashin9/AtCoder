#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n;
    cin >> n;
    vector<string> s(n);
    for (auto &t : s) cin >> t;
    set<string> st;
    for (auto t : s) {
        string nt = t;
        reverse(nt.begin(), nt.end());
        if (!st.count(t) and !st.count(nt)) st.insert(t);
    }
    cout << st.size() << endl;

    
    
    
    return 0;
}