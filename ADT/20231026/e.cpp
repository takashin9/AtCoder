#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    set<string> st;
    for (int i = 0; i < n; i++) cin >> s[i] >> t[i];
    int ans = 1;
    int p = t[0];
    for (int i = 0; i < n; i++) {
        if (!st.count(s[i])) {
            if (p < t[i]) {
                p = t[i];
                ans = i + 1;
            }
            st.insert(s[i]);
        }
    }
    cout << ans << endl;
    
    
    
    return 0;
}