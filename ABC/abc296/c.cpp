#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    set<ll> st;
    for (auto &b : a) {
        cin >> b;
        st.insert(b);
    }
    for (int i = 0; i < n; i++) {
        if (st.count(x+a[i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    

    
    
    return 0;
}