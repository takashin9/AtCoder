#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    string s, t;
    cin >> s >> t;

    vector<bool> f(t.size()), b(t.size());

    if((s[0] == t[0]) or (s[0] == '?' or t[0] == '?')) f[0] = true;

    for(int i = 1; i < t.size(); i++){
        if(((s[i] == t[i]) or (s[i] == '?' or t[i] == '?')) and f[i-1]) f[i] = true;
    }

    if((s[s.size()-1] == t[t.size()-1]) or (s[s.size()-1] == '?' or t[t.size()-1] == '?')) b[t.size()-1] = true;

    for(int i = 2; i <= t.size(); i++){
        if(((s[s.size()-i] == t[t.size()-i]) or (s[s.size()-i] == '?' or t[t.size()-i] == '?')) and b[t.size()-i+1]) b[t.size()-i] = true;
    }


    for(int x = 0; x <= t.size(); x++){
        if(x == 0) cout << (b[0] ? "Yes" : "No") << endl;
        else if(x == t.size()) cout << (f[t.size()-1] ? "Yes" : "No") << endl;
        else cout << (f[x-1] and b[x] ? "Yes" : "No") << endl;
    }
    
    return 0;
}