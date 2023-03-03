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

    set<pair<ll,ll>> st;
    pair<ll,ll> p = {0,0};
    st.insert(p);

    for(int i = 0; i < n; i++){
        if(s[i] == 'R') p.first++;
        else if(s[i] == 'L') p.first--;
        else if(s[i] == 'U') p.second++;
        else p.second--;

        if(st.count(p)){
            cout << "Yes" << endl;
            return 0;
        }
        else st.insert(p);
    }
    cout << "No" << endl;
    
    return 0;
}