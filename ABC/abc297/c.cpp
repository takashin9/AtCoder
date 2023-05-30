#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w-1; j++) {
            if (s[i][j] == 'T' and s[i][j+1] == 'T') {
                s[i][j] = 'P';
                s[i][j+1] = 'C';
            }
        }
    }
    for (int i = 0; i < h; i++) cout << s[i] << endl;
    
    
    return 0;
}