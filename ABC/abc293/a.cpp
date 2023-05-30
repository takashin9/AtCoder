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
    for (int i = 0; i < s.size()/2; i++) {
        swap(s[2*i], s[2*i+1]);
    }
    cout << s << endl;
    
    return 0;
}