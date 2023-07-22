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
    cout << ((s[0] == s[1] and s[1] == s[2]) ? "Won" : "Lost") << endl;
    
    
    return 0;
}