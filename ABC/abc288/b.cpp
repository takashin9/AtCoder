#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n, k;
    cin >> n >> k;
    vector<string> s(n);
    for(auto &x : s) cin >> x;

    set<string> st;

    for(int i = 0; i < k; i++){
        st.insert(s[i]);
    }

    for(auto x : st) cout << x << endl;

    
    return 0;
}