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
    int ans = 0;
    for (int n = 0; n < 10000; n++) {
        vector<int> c(10);
        int m = n;
        for (int i = 0; i < 4; i++) {
            c[m % 10]++;
            m /= 10;
        }
        bool maru = true, ok = true;
        for (int i = 0; i < 10; i++) {
            if (s[i] == 'o' and c[i] == 0) maru = false;
            if (s[i] == 'x' and c[i] > 0) ok = false;
        }
        if (maru and ok) ans++;
    }
    cout << ans << endl;


    
    
    return 0;
}