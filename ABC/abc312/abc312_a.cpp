#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    string s;
    cin >> s;
    set<string> t = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    if (t.count(s)) cout << "Yes" << endl;
    else cout << "No" << endl;

    
    
    return 0;
}