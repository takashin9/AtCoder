#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    set<char> st = {'a', 'e', 'i', 'o', 'u'};
    string s;
    cin >> s;
    for (auto t : s) {
        if (!st.count(t)) cout << t;
    }
    cout << endl;
    
    
    return 0;
}