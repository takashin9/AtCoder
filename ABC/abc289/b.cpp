#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;



int main() {
    
    ll n, m;
    cin >> n >> m;
    set<ll> a;
    for(int i = 0; i < m; i++){
        ll x;
        cin >> x;
        a.insert(x);
    }

    stack<ll> st;

    for(int i = 1; i <= n; i++){
        if(a.count(i)) st.push(i);
        else{
            cout << i << " ";
            while(st.size()){
                cout << st.top() << " ";
                st.pop();
            }
        }
    }
    cout << endl;
    
    
    return 0;
}